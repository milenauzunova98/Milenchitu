#include <stdio.h>

#define MAX(a, b) ((a > b) ? a : b)

int main() {
    int a=2;
    int b=7;
    int larger=MAX(a, b);

    printf(" Larger: %d\n", larger);

    return 0;
}
