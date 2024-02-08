#include <stdio.h>
#include "safeint.h"
#include <limits.h>

SafeResult safeadd(int a, int b) {
    SafeResult result;
    result.value = a + b;
    result.errorflag = (b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b);
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    result.value = a - b;
    result.errorflag = (b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b);
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    result.value = a * b;
    result.errorflag = (a != 0 && result.value / a != b);
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    result.value = a / b;
    result.errorflag = (b == 0 || (a == INT_MIN && b == -1));
    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result;
    int temp;
    if (scanf(str, "%d", &temp) == 1) {
        result.value = temp;
        result.errorflag = 0;
    } else {
        result.value = 0;
        result.errorflag = 1;
    }
    return result;
}
