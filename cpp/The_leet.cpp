#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
  if (index >= nums.size())
  {
    ans.push_back(output);
    return;
  }
  solve(nums, output, index + 1, ans);
  int element = nums[index];
  output.push_back(element);
  solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
  vector<vector<int>> ans;
  vector<int> output;
  int index = 0;
  solve(nums, output, index, ans);
  for (const auto &subset : ans)
  {
    cout << "[";
    for (int i = 0; i < subset.size(); ++i)
    {
      cout << subset[i];
      if (i != subset.size() - 1)
      {
        cout << ", ";
      }
    }
    cout << "]\n";
  }

  return ans;
}
void solve(string str, string output, int index, vector<string> &ans)
{
  if (index >= str.length())
  {
    if (output.length() > 0)
    {
      ans.push_back(output);
    }
    return;
  }
  solve(str, output, index + 1, ans);
  char element = str[index];
  output.push_back(element);
  solve(str, output, index + 1, ans);
}
vector<string> subsequences(string str)
{
  // Write your code here
  vector<string> ans;
  string output = "";
  int index = 0;
  solve(str, output, index, ans);
  return ans;
}

//  Key Pad conversion
void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{

  // base case
  if (index >= digit.length())
  {
    ans.push_back(output);
    return;
  }

  int number = digit[index] - '0';
  string value = mapping[number];

  for (int i = 0; i < value.length(); i++)
  {
    output.push_back(value[i]);
    solve(digit, output, index + 1, ans, mapping);
    output.pop_back();
  }
}

vector<string> letterCombinations(string digits)
{
  vector<string> ans;
  if (digits.length() == 0)
    return ans;
  string output;
  int index = 0;
  string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  solve(digits, output, index, ans, mapping);
  return ans;
}

// ////////////////// Rat maze
class Solution
{
public:
  bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
  {
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path)
  {
    // YOu Have reached x,y
    // Base Case
    if (x == n - 1 && y == n - 1)
    {
      ans.push_back(path);
      return;
    }

    visited[x][y] = 1;

    // 4 choices - D,L,R,U

    // down
    int newx = x + 1;
    int newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
      path.push_back('D');
      solve(m, n, ans, newx, newy, visited, path);
      path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, n, visited, m))
    {
      path.push_back('L');
      solve(m, n, ans, newx, newy, visited, path);
      path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, n, visited, m))
    {
      path.push_back('R');
      solve(m, n, ans, newx, newy, visited, path);
      path.pop_back();
    }

    // UP
    newx = x - 1;
    newy = y;
    if (isSafe(newx, newy, n, visited, m))
    {
      path.push_back('U');
      solve(m, n, ans, newx, newy, visited, path);
      path.pop_back();
    }
    visited[x][y] = 0;
  }
  vector<string> findPath(vector<vector<int>> &m, int n)
  {
    vector<string> ans;
    if (m[0][0] == 0)
    {
      return ans;
    }
    // Your code goes here
    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = m;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        visited[i][j] = 0;
      }
    }

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
  }
};

int main(int argc, char const *argv[])
{
  vector<int> nums;
  nums = {6, 8, 4, 5};
  subsets(nums);
  return 0;
}
