#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}

double square_root(int n, int precision)
{
    int s = 0, e = n;double ans;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    double j = 1;
    for(int i = 0;i<precision;i++){
        j = j/10;
        for (double jo = ans; (jo*jo)<n; jo=jo+j)
        {
            ans = jo;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    // int b[] = {3, 4, 5, 2, 6, 8, 9};
    int b[] = {8, 9, 4, 5};
    cout << "The pivot is at index " << getPivot(b, sizeof(b) / sizeof(b[0])) << " i.e. " << b[getPivot(b, sizeof(b) / sizeof(b[0]))] << endl;
    // cout << binarysearch(b, sizeof(b) / sizeof(b[0]), 6) << endl;
    cout<<"Sqaure root of 81 upto 4 precision is = " << square_root(81, 4) << endl;
    return 0;
}

//       Book Allocation problem --------------

bool possible(vector<int> &arr, int n, int m, int mid) {
  int count = 0;
  int pageSum = 0;
  for (int i = 0; i < n; i++) {
    if (pageSum + arr[i] <= mid) {
      pageSum += arr[i];
    } else {
      count++;
      if (count >= m || arr[i] > mid) {
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}
int findPages(vector<int> &arr, int n, int m) {
  // Write your code here.
  int s = 0;
  int sum = 0, ans = -1;
  if (m > n) {
    return ans;
  }
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  int e = sum;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (possible(arr, n, m, mid)) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}