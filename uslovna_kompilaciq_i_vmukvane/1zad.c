#include <stdio.h>
#define DEBUG

void BubbleSort(int arr[], int n){
  int i, j, temp;
  for(i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++) {
      if (arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int sum_3(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (i % 3 == 0) {
      sum += arr[i];
    }
  }
  return sum;
}

int main() {
  int n;
  printf("N: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter elements:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

#ifdef DEBUG
  BubbleSort(arr,n);
  printf("Sorted: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
#endif

  int Sum = sum_3(arr, n);
  printf("Sum: %d\n",Sum);

  return 0;
}
