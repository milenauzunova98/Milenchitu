#include <stdio.h>
#include <string.h>

int strlength(char str[]) {
    return strlen(str);
}

void strconcat(char result[], char str1[], char str2[]) {
    strcpy(result, str1);
    strcat(result, str2);
}

int strcompare(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

void help() {
    printf("1. strlength - Finds the length of a string.\n");
    printf("2. strconcat - Concatenates two strings.\n");
    printf("3. strcompare - Compares two strings.\n");
}

int main() {
    help();
    char str1[] = "Hello";
    char str2[] = "World";

    printf("\nExamples of using functions:\n");

    printf("1. Length of '%s': %d\n", str1, strlength(str1));

    char result[50];
    strconcat(result, str1, str2);
    printf("2. Concatenated strings: %s\n", result);

    printf("3. Comparison of '%s' and '%s': %d\n", str1, str2, strcompare(str1, str2));

    return 0;
}
