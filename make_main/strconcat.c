#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s\n", argv[0]);
        return 1;
    }

    char result[100]; 
    strcpy(result, argv[1]);
    strconcat(result, argv[2]);

    printf("%s\n", result);

    return 0;
}
