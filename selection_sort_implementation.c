#include <stdio.h>

int main() {
    int n, temp, min_index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(int i = 0; i < n - 1; i++) {
        min_index = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
