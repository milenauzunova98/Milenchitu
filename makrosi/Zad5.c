#include <stdio.h>
#define SWAP(A, B, TYPE) { \
    TYPE temp=A; \
    A=B; \
    B=temp; \
}

int main() {
    int a=5;
    int b=10;
    printf("Before: a=%d, b=%d\n", a, b);
    SWAP(a, b, int);
    printf("After: a=%d, b=%d\n", a, b);
    return 0;
}
