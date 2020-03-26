#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int* array = (int*)malloc(4*sizeof(int));
    // int array[4]로 선언할 시
    // 주소값 변경 불가

    if(!array) {
        exit(1);
    }

    array[0] = 1;
    array[1] = 2;
    *(array+2)= 3;

    int* tmp = (int*)malloc(8*sizeof(int));
    if(!array) {
        exit(1);
    }
    for(int i=0;i<4;i++) {
        tmp[i] = array[i];
    }

    free(array);

    array = tmp;
    
    array[4] = 4;
    array[5] = 5;

    printf("%d", array[5]);

    return 0;
}