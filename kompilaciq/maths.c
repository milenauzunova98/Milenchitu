#include "maths.h"

int factorial(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}
