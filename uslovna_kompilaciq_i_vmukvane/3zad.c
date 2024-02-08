#include <stdio.h>
#define Windows

void BubbleSort(int arr[], int n) {
  int i, j, temp;
  for (i = 0; i<n-1; i++) {
    for (j=0; j<n-i-1; j++) {
      if (arr[j]>arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void selection(int arr[], int n) {
  int i, j, min, temp;
  for (i=0; i<n-1; i++) {
    min=i;
    for (j=i+1; j<n; j++) {
      if (arr[j]<arr[min]) {
        min=j;
      }
    }
    temp=arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

void insertion(int arr[], int n) {
  int i, j, key;
  for (i=1; i<n; i++) {
    key=arr[i];
    j=i-1;
    while (j>=0 && arr[j]>key) {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

void reverse(int arr[], int n) {
    int start=0;
    int end=n-1;
    int temp;

    while (start<end) {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
  int arr[10] = {1, 4, 2, 6, 5, 2, 3, 7, 8, 10};

  #ifdef Windows
  BubbleSort(arr,10);
  #elif defined Linux
  selection(arr,10);
  #elif defined MacOS
  insertion(arr);
  #else
  reverse(arr,10);
  #endif

  for(int i=0; i<10; i++){
    printf("%d", arr[i]);
  }
  return 0;
}
