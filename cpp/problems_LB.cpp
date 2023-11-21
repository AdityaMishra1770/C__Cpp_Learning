#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mount_index(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    int s = 0, e = size - 1, mountindex;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            mountindex = s;
            break;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            s = mid++;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            e = mid--;
        }
        else if (arr[s] == arr[e])
        {
            cout << s;
        }
        mid = s + (e - s) / 2;
    }
    cout << mountindex;
}
int *sort_0_1(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        if ((arr[start] == 1) && (arr[end] == 0))
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 1)
        {
            end--;
        }
    }
    return arr;
}

int first_pos(int arr[], int n, int k) {
  int ans = -1, s = 0, e = n - 1;
  int m = s + (e - s) / 2;
  while (s <= e) {
    if (arr[m] == k) {
      ans = m;
      e = m-1;
    } else if (arr[m] > k) {
      e = m-1;
    } else {
      s = m+1;
    }
    m = s + (e - s) / 2;
  }
  return ans;
}
int last_pos(int arr[], int n, int k) {
  int ans = -1, s = 0, e = n - 1;
  int m = s + (e - s) / 2;
  while (s <= e) {
    if (arr[m] == k) {
      ans = m;
      s = m+1;
    } else if (arr[m] > k) {
      e = m-1;
    } else {
      s = m+1;
    }
    m = s + (e - s) / 2;
  }
  return ans;
}

int o[2];
int *occ(int arr[], int size, int target)
{
    o[0] = first_pos(arr, size, target);
    o[1] = last_pos(arr, size, target);
    return o;
}

void first_last(int arr[], int size, int target)
{
    int left = 0, right = size - 1, f = 0, found_l = 0, found_r = 0;
    while (left < right)
    {
        if (arr[left] == target)
        {
            found_l = 1;
        }
        else
        {
            left++;
        }
        if (arr[right] == target)
        {
            found_r = 1;
        }
        else
        {
            right--;
        }
        if (found_l & found_r)
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "\nFirst occurence of " << target << " is at " << left + 1 << endl;
        cout << "Last occurence of " << target << " is at " << right + 1 << endl;
    }
    else
    {
        cout << "\ntarget " << target << " not found in given array" << endl;
    }
}
int *sotred_0_1_2(int arr[], int size)
{
    int start, mid, end, count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count_0++;
        }
        else if (arr[i] == 1)
        {
            count_1++;
        }
        else if (arr[i] == 2)
        {
            count_2++;
        }
    }
    start = 0;
    mid = count_0;
    end = count_0 + count_1;
    while (end < size)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[end] == 2)
        {
            end++;
        }
        else if ((arr[start] == 1) && (arr[mid] == 0))
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if ((arr[start] == 1) && (arr[mid] == 2))
        {
            swap(arr[start], arr[mid]);
            mid++;
        }
        else if ((arr[start] == 2) && (arr[end] == 0))
        {
            swap(arr[start], arr[end]);
            start++;
            end++;
        }
        else if ((arr[end] == 1) && (arr[mid] == 2))
        {
            swap(arr[end], arr[mid]);
            end++;
            mid++;
        }
        else if ((arr[end] == 0) && (arr[mid] == 2))
        {
            swap(arr[end], arr[mid]);
            end++;
        }
    }
    return arr;
}
int main(int argc, char const *argv[])
{
    int num = 8;
    int arr[] = {0, 1, 0, 1, 1, 0, 1}, arr2[] = {0, 1, 0, 2, 2, 1, 2, 0, 1, 0};
    cout << "Original array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i];
    }
    first_last(arr, 7, 1);
    cout << "\nSorted array: ";
    int *sort, *sort2, *p;
    sort = sort_0_1(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << *(sort++);
    }
    first_last(arr, 7, 1);
    cout << "\nOriginal array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i];
    }
    first_last(arr2, 10, 2);
    sort2 = sotred_0_1_2(arr2, 10);
    cout << "\nSorted array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(sort2++);
    }
    first_last(arr2, 10, 1);
    first_last(arr2, 10, 4);
    p = occ(arr2, 10, 2);
    for(int i=0;i<2;i++){
        cout<<*(p+i)<<" ";
    }
    mount_index(arr, 7);
    mount_index(arr2, 10);
    return 0;
}