#include <stdio.h>
#include "mystrings.h"

int main() {
    char str1[MAX_STRING_LENGTH] = "Hello";
    char str2[MAX_STRING_LENGTH] = "World";
    char result[MAX_STRING_LENGTH * 2];
    printf("Length of '%s': %d\n", str1, strlength(str1));
    strconcat(result, str1, str2);
    printf("Concatenated strings: %s\n", result);
    printf("Comparison of '%s' and '%s': %d\n", str1, str2, strcompare(str1, str2));
    return 0;
}
