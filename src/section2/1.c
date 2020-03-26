#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 100

int main(void) {
    char* words[100];
    char buffer[BUFFER_SIZE];

    int n = 0; // number of strings

    while (n < 4 && scanf("%s", buffer) != EOF) {
        words[n++] = strdup(buffer); // POSIX 표준
    }

    printf("\n");

    for(int i=0;i<n;i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}