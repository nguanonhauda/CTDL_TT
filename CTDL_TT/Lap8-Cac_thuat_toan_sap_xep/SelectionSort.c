#include <stdio.h>

int main() {
   int n ; 
   scanf("%d", &n);
   int my_array[n];
   for ( int i = 0 ; i < n ; i++){
    scanf("%d", &my_array[i]);
   }
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (my_array[j] < my_array[min_index]) {
                min_index = j;
            }
        }
        int temp = my_array[i];
        my_array[i] = my_array[min_index];
        my_array[min_index] = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}