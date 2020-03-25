#include <stdio.h>
#include <string.h>

int main(void) {
    int* array = (int*)malloc(4*siszeof(int));

    array[0] = 1;
    array[1] = 2;
    *(array+2)= 3;

    int* tmp = (int*)malloc(8*sizeof(int));
    for(int i=0;i<4;i++) {
        tmp[i] = array[i];
    }

    return 0;
}