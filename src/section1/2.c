#include <stdio.h>

int calculate_sum(int*); 

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = calculate_sum(arr);

    double avg = sum / (sizeof(arr) / sizeof(arr[0]));

    printf("sum is %d\naverage is %lf", sum, avg);

    return 0;
}

int calculate_sum(int* array) {
    int sum, i;
    sum = 0;
    for ( i = 0; i < 10; i++ ) {
        sum = sum + *(array + i);
    }
    return sum;
}