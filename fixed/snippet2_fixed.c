#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL) {
        return 1;
    }

    *ptr = 50;
    printf("Value: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
