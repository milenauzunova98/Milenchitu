#include <stdio.h>

#define DEBUG_PRINT(variable) \
    do { \
        printf("Variable: %s\n", #variable); \
        printf("Value: %d\n", variable); \
        printf("File: %s\n", __FILE__); \
        printf("Line: %d\n", __LINE__); \
        printf("Function: %s\n", __FUNCTION__); \
    } while (0)

int main(){
    int x=16;
    DEBUG_PRINT(x);

    return 0;
}