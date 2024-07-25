#include <stdio.h>

void quicksort(int array[], int low, int high);
int partition(int array[], int low, int high);

int main() {
    int n;
    scanf("%d", &n);

    int myArray[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]); 
    }

    quicksort(myArray, 0, n - 1); 

    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]); 
    }
    printf("\n"); 

    return 0;
}

void quicksort(int array[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(array, low, high);
        quicksort(array, low, pivotIndex - 1);
        quicksort(array, pivotIndex + 1, high);
    }
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return i + 1;
}