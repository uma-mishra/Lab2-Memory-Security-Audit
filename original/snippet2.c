#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));

    *ptr = 50;
    free(ptr);

    printf("Value after free: %d\n", *ptr);

    return 0;
}
