#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n) {
  // Write your code here.
  for (int i = 0; i < n-1; i++) {
    int small = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j]< arr[small]) {
        small = j;
      }
    }
    swap(arr[i], arr[small]);
  }
}

void bubbleSort(vector<int> &arr, int n) {
  // Write your code here.
  // sort(arr.begin(),arr.end());
  for (int i = 1; i < n; i++) {
    bool notswaped = true;
    for (int j = 0; j < (n - i); j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        notswaped = false;
      }
    }
    if (notswaped) {
      break;
    }
  }
}

int main(int argc, char const *argv[]){
    return 0;
}