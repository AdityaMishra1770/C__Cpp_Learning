#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main2()
{
    int garbages[100], val = 30;
    std::fill_n(garbages, 100, val);
    for (int garbage = 0; garbage < 100; garbage++)
    {
        cout << garbage + 1 << " element is " << garbages[garbage] << "\n";
    }
    return 0;
}
// This program will fill the array with a specific value and then print out each elements of that array.

int max_Array_min(int arr[], int size)
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;
    }
    cout << "Max : " << max << " and Min : " << min;
    return 0;
}

int sum_arr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << endl
         << "Sum of array elements is " << sum << endl;
    return sum;
}
int search(int arr[], int size, int n)
{
    int k = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            k = i;
            break;
        }
    }
    if (k != INT_MIN)
    {
        cout << "Found  the array " << arr[k] << " at index " << k;
    }
    else
    {
        cout << "Not Found in the array";
    }
    return 0;
}
int *sort(int arr[], int size)
{
    static int r[100000];
    cout << endl
         << "Current array" << endl;
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    while (c <= size)
    {

        for (int i = 0; i < size; i++)
        {
            if (i + 1 < size)
            {

                int store = arr[i + 1];
                if (arr[i] > store)
                {
                    arr[i + 1] = arr[i];
                    arr[i] = store;
                }
            }
        }
        c++;
    }
    cout << endl
         << "Fixed array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        r[i] = arr[i];
    }
    return r;
}
int binarySearch(int arr[], int size, int n)
{
    int arry[size];
    int *d;
    d = sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        arry[i] = *(d + i);
    }
    int s = 0, e = size - 1, m = size / 2;
    while (s <= e)
    {
        if (n < arry[m])
        {
            e = m - 1;
            m = (s + e) / 2;
        }
        else if (n > arry[m])
        {
            s = m + 1;
            m = (s + e) / 2;
        }
        else
        {
            cout << endl
                 << "Found the element " << n << " at " << m + 1;
            break;
        }
    }
    if (s > e)
    {
        cout << endl
             << "Doesn't Found the element. " << endl;
    }
    return 0;
}
int reverse(int arr[], int size)
{
    cout << endl
         << "Current array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int container;
    for (int i = 0; i < size / 2; i++)
    {
        cout << endl
             << size << " i = " << i << " (size*2)-i-1 " << (size)-i - 1 << endl;
        container = arr[i];
        arr[i] = arr[(size)-i - 1];
        arr[(size)-i - 1] = container;
    }
    cout << endl
         << "Swapped array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void swap_alter(int arr[], int size)
{
    int c = 0;
    while (c < size - 1)
    {
        swap(arr[c], arr[c + 1]);
        c += 2;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void unique(int arr[], int size)
{
    int c = 0, u = arr[0];
    while (c < size)
    {
        bool flag = true;
        cout << endl
             << "u : " << u << endl;
        for (int i = 0; i < size; i++)
        {
            if (u == arr[i] && c != i)
            {
                cout << endl
                     << "arr[" << i << "] : " << arr[i] << endl;
                flag = false;
                continue;
            }
        }
        if (flag == true)
        {
            cout << endl
                 << "unique number is : " << u << endl;
            break;
        }
        c++;
        cout << endl
             << "c++ : " << c << endl;

        u = arr[c];
    }
}
int main(int argc, char const *argv[])
{
    // int arro[7] = {-7, 8, 689, 56,  24, 450};
    // max_Array_min(arro, 7);
    // main2();   The single value initialization at every place in array
    // sum_arr(arro, 7);
    // search(arro, 7, 56);
    // sort(arro, 7);
    // { //----------------Getting pointer of array from function----------
    // int *d;
    // d = sort(arro, 7);
    // for (int i = 0; i < 7; i++)
    // {
    // cout << *(d + i) << " ";
    // }
    // }
    // cout << "\n";
    // binarySearch(arro, 7, 69);
    int y[] = {56, 56, 56, 66, 66, 68, 68, 78};
    // binarySearch(y, 7, 58);
    // reverse(y, 8);
    // swap_alter(y, 8);
    // unique(y, 8);
    return 0;
}