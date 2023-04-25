#include <stdio.h>

int main() {
  int arr[] = {1, -2,-4,-6,-9,-12, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("Negative numbers in the array: ");
  for(int i = 0; i < size; i++) {
    if(arr[i] < 0) {
      printf("%d ", arr[i]);
    }
  }
  
  return 0;
}
