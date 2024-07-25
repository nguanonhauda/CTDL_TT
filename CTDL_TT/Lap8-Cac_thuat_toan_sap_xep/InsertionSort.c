#include <stdio.h>

int main() {
    int n ; 
    scanf("%d", &n);
    int myArray[n];
    for ( int  i = 0 ; i < n ; i++){
        scanf("%d", &myArray[i]);
    }
    for (int i = 1; i < n; i++) {
        int insertIndex = i;
        int currentValue = myArray[i];
        int j = i - 1;

        while (j >= 0 && myArray[j] > currentValue) {
            myArray[j + 1] = myArray[j];
            insertIndex = j;
            j--;
        }
        myArray[insertIndex] = currentValue;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}