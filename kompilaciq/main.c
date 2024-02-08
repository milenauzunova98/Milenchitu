#include <stdio.h>
#include "maths.h"

int main() {
    int number = 5;
    int result = factorial(number);

    printf("Factorial of %d is: %d\n", number, result);

    return 0;
}
