#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j;
    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    printf("Array before sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    bubbleSort(arr, size);
    
    printf("\nArray after sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
