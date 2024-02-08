#include <stdio.h>
#include <limits.h>

int main() {
    printf("%-20s%-20s%-20s%-25s%-25s\n", "Type", "Format", "Size (bytes)", "Min Value", "Max Value");

    printf("%-20s%-20s%-20lu%-25d%-25d\n", "char", "%c", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("%-20s%-20s%-20lu%-25d%-25d\n", "unsigned char", "%c", sizeof(unsigned char), 0, UCHAR_MAX);

    printf("%-20s%-20s%-20lu%-25d%-25d\n", "short", "%hi", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-20s%-20s%-20lu%-25d%-25d\n", "unsigned short", "%hu", sizeof(unsigned short), 0, USHRT_MAX);

    printf("%-20s%-20s%-20lu%-25d%-25d\n", "int", "%d", sizeof(int), INT_MIN, INT_MAX);
    printf("%-20s%-20s%-20lu%-25u%-25u\n", "unsigned int", "%u", sizeof(unsigned int), 0, UINT_MAX);

    printf("%-20s%-20s%-20lu%-25ld%-25ld\n", "long", "%ld", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-20s%-20s%-20lu%-25lu%-25lu\n", "unsigned long", "%lu", sizeof(unsigned long), 0UL, ULONG_MAX);

    printf("%-20s%-20s%-20lu%-25lld%-25lld\n", "long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("%-20s%-20s%-20lu%-25llu%-25llu\n", "unsigned long long", "%llu", sizeof(unsigned long long), 0ULL, ULLONG_MAX);

    return 0;
}

