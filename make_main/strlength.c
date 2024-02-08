#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s\n", argv[0]);
        return 1;
    }

    int length = strlength(argv[1]);
    printf("%d\n", length);

    return 0;
}
