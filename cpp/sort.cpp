#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Merge 1st way
void merge(int arr[], int start, int mid, int end)
{
  int start2 = mid + 1;

  if (arr[mid] <= arr[start2])
  {
    return;
  }

  while (start <= mid && start2 <= end)
  {
    if (arr[start] <= arr[start2])
    {
      start++;
    }
    else
    {
      int value = arr[start2];
      int index = start2;

      while (index != start)
      {
        arr[index] = arr[index - 1];
        index--;
      }
      arr[start] = value;

      start++;
      mid++;
      start2++;
    }
  }
}

void mergeSort(int arr[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}
// Merge 1st way

void selectionSort(vector<int> &arr, int n)
{
  // Write your code here.
  for (int i = 0; i < n - 1; i++)
  {
    int small = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[small])
      {
        small = j;
      }
    }
    swap(arr[i], arr[small]);
  }
}

void swapy(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int quickSortHelper(int arr[], int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swapy(&arr[i], &arr[j]);
    }
  }
  swapy(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int s, int e)
{
  if (s >= e)
  {
    return;
  }
  int pi = quickSortHelper(arr, s, e);
  quickSort(arr, s, pi - 1);
  quickSort(arr, pi + 1, e);
}

void bubbleSort(vector<int> &arr, int n)
{
  // Write your code here.
  // sort(arr.begin(),arr.end());
  for (int i = 1; i < n; i++)
  {
    bool notswaped = true;
    for (int j = 0; j < (n - i); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        notswaped = false;
      }
    }
    if (notswaped)
    {
      break;
    }
  }
}

int partQuickSort(int arr[], int start, int end)
{
  int pivot = arr[start];
  int cnt = 0;
  for (int i = start + 1; i <= end; i++)
  {
    if (arr[i] <= pivot)
    {
      cnt++;
    }
  }
  int p_index = start + cnt;
  swap(arr[start], arr[p_index]);
  int i = start + 1, j = end;
  while (i < p_index && j > p_index)
  {
    while (arr[i] <= pivot)
    {
      i++;
    }
    while (arr[j] > pivot)
    {
      j--;
    }
    if (i < p_index && j > p_index)
    {
      swap(arr[i++], arr[j--]);
    }
  }
  return p_index;
}
void QuickSortLov(int arr[], int start, int end)
{
  if (start >= end)
  {
    return;
  }
  int p = partQuickSort(arr, start, end);
  QuickSortLov(arr, start, p - 1);
  QuickSortLov(arr, p + 1, end);
}

int main(int argc, char const *argv[])
{
  int arr[] = {5, 8, 3, 10, 12, 5, 17, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Original array: ";
  for (size_t i = 0; i < n; i++)
  {
    cout << " " << arr[i];
  }
  cout << endl;
  cout << "Sorted array: ";
  QuickSortLov(arr, 0, n - 1);
  for (size_t i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
