#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    *ptr = 100;
    printf("Value: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    return 0;
}
