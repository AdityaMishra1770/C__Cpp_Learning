#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int pow10(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return pow10(n - 1) * 10;
    }
}

void sayDigit(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int countDistinctWays(int nStairs)
{
    //  Write your code here.
    if (nStairs < 0)
    {
        return 0;
    }
    else if (nStairs == 0)
    {
        return 1;
    }
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}
int fibo(int a)
{
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    return fibo(a - 1) + fibo(a - 2);
}
void print(int a)
{
    if (a == 0)
    {
        return;
    }
    cout << "\n"
         << a << endl;
    print(a - 1);
}
int power2(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return 2 * power2(a - 1);
    }
}
int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

bool search(int arr[], int size, int key)
{
    if (arr[0] == key)
    {
        return true;
    }
    else if (size == 0)
    {
        return false;
    }
    else
    {
        bool ans = search(arr + 1, size - 1, key);
        return ans;
    }
}
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool an = isSorted(arr + 1, size - 1);
        return an;
    }
}
void print(int arr[], int size)
{
    cout << "size is = " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool recursive_BinarySearch(int arr[], int size, int element)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    print(arr, size);
    cout << " arr[" << mid << "] is =" << arr[mid] << " and element is = " << element << endl;
    if (arr[mid] == element)
    {
        return true;
    }
    else
    {
        return false;
    }

    if (arr[mid] < element)
    {
        bool ans = recursive_BinarySearch(arr + mid + 1, (size - mid - 1), element);
        return ans;
    }
    else if (arr[mid] > element)
    {
        bool an = recursive_BinarySearch(arr, mid, element);
        return an;
    }
}
void reverseDisplay(string str)
{
    if (str.length() <= 0)
    {
        return;
    }
    cout << str[str.length() - 1];
    str.back() = '\0';
    size_t newLength = str.length() - 1; // Set the new length you want
    str.resize(newLength);
    reverseDisplay(str);
}
int main(int argc, char const *argv[])
{
    // int *n = new int;
    // cin >> *n;
    // cout<<fact(*n)<<" and 2 power "<<*n<<" is = "<<power2(*n)<<" fibo of "<<*n<<" is = "<<fibo(*n)<<endl;
    // print(5);
    // string ar[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // sayDigit(*n,ar);
    // int arr[6] = {4, 6, 8, 9, 10, 211};
    // bool ans = isSorted(arr, 6);
    // cout << ans;
    // bool so = search(arr, 6, 12);
    // cout << endl
    //      << so;
    // bool bi = recursive_BinarySearch(arr, 6, 11);
    // cout << endl
    //      << bi;
    reverseDisplay("Hello C++ i am doing fine.");
    return 0;
}