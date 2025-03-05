#include <stdio.h>

void findSecondSmallest(int arr[], int size) {
    int smallest = 0, secondSmallest = -1;

    if (size < 2) {
        printf("Array doesn't have enough elements.\n");
        return;
    }

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[smallest]) {
            smallest = i;
        }
    }


    for (int i = 0; i < size; i++) {
        if (i != smallest && (secondSmallest == -1 || arr[i] < arr[secondSmallest])) {
            secondSmallest = i;
        }
    }

    printf("Second smallest element: %d\n", arr[secondSmallest]);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondSmallest(arr, size);
    return 0;
}
