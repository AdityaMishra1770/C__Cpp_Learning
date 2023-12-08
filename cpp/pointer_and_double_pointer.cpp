#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char *c = new char;  // Dynamic memory allocation for heap; In heap no variabke name is allocated only address is allocated only address is returned so to call we need to stire adress in pointer in  stack;
    int *n = new int, m; // for deleting int in heap ----->> delete n
    // cout << "c = "<<c<<" n = "<<n<<" m = "<<m<<endl;
    // cout << "*c = "<<*c<<" *n = "<<*n<<" &m = "<<&m;

    // creating dynamic array;
    cin >> *n;
    m = *n;
    delete n;
    cout << n << " *n = " << *n;
    int *r = new int[m]; // for deleting array ----->> delete []r
    for (int i = 0; i < *n; i++)
    {
        cin >> r[i];
    }
    for (int i = 0; i < *n; i++)
    {
        m += r[i];
    }
    cout << m;

    // creating 2D array in heap;
    int **arr2 = new int *[m]; // row
    for (int j = 0; j < m; j++)
    {
        arr2[j] = new int[3]; // col
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
    // for deleting 2d array ----->> delete[] arr2[i],delete[] arr2;
    return 0;
}
void updateReference(int &n)
{ // Reference by &i
    n++;
}
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i[a] << " "; //*(a+i) = a[i] and *(a+i) = *(i+a) = i[a] {only used for array}
    }
    cout << endl;
}
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int max = 0;
        if (nums[0] > nums[1])
            return 0;
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i] > nums[max])
                max = i;
        }
        return max;
    }
};
// Testing the solution
int main2(int argc, char const *argv[])
{
    int arr[10] = {0};
    char ch[] = "abcdef";
    int *ar = &arr[0];
    char *c = ch;
    cout << "ar = " << ar << " c = " << c << endl
         << " before ar = " << *ar << endl;
    // update(ar);
    cout << "After ar = " << *ar << endl;
    return 0;
}
int main3()
{
    // int n = 9;
    // cout << *(&n);
    int a[] = {8, 5, 63};
    printArray(a, 3);
    vector<int> arr = {3, 4, 5, 2, 8217832, 7, 8, 9, 10, 78788236};
    int r = 90;
    int *t = &r;
    int **y = &t;
    int &j = r;
    // cout<<" r = "<<r<<" t = "<<t<<" *t = "<<*t<<" *y = "<<*y<<" **y = "<<**y;
    *y = &r;
    // cout<<endl<<" r = "<<y<<" *y = "<<*y<<" &y = "<<(&r);
    cout << " before reference r = " << r << endl;
    updateReference(r);
    cout << " After reference r = " << r << endl;
    return 0;
}

void update(int *p)
{
    *p = *p + 1;
}
