#include <stdio.h>

int findMax(int *arr, int size);

int main() {
    int arr[] = {6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    int max = findMax(p, size);
    printf("Maximum number in array: %d\n", max);

    return 0;
}

int findMax(int *arr, int size) {
    int max = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}
