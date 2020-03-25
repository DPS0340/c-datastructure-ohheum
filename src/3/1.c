#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[40];

    while (1) {
        printf("$ ");
        gets(buffer);
        printf("%s:%d\n", buffer, strlen(buffer));
    }

    return 0;
}