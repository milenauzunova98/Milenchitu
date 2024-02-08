#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printErrorMessage("Usage: program_name num1 num2");
        return EXIT_FAILURE;
    }

    int a = safestrtoint(argv[1]).value;
    int b = safestrtoint(argv[2]).value;

    if (safestrtoint(argv[1]).errorflag || safestrtoint(argv[2]).errorflag) {
        printErrorMessage("Invalid input. Please enter valid integers.");
        return EXIT_FAILURE;
    }

    SafeResult result;
    result = safedivide(a, b);

    if (result.errorflag) {
        printErrorMessage("Overflow or underflow occurred.");
        return EXIT_FAILURE;
    }
  
    printf("Result: %d\n", result.value);

    return EXIT_SUCCESS;
}
