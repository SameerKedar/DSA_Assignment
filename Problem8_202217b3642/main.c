#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, pos, temp;
    for (i = 0; i < n - 1; i++) {
        pos = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[pos]) {
                pos = j;
            }
        }
        // Swap arr[i] with arr[pos]
        if (pos != i) {
            temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
