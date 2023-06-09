#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void shuffle(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int j = i + rand() % (n - i);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void bogoSort(int arr[], int n) {
    while (!isSorted(arr, n)) {
        shuffle(arr, n);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 2, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    srand(time(NULL));
    bogoSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
