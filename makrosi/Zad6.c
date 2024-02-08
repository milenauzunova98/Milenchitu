#include <stdio.h>

#define SWAP(a, b, type) \
    do { \
        type temp=a; \
        a=b; \
        b=temp; \
    } while (0)
#define SIZE 5
#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    do { \
        for(int i=0; i<SIZE-1; i++){ \
            for(int j=0; j<SIZE-i-1; j++){  \
                if(COMPARE(ARRAY[j], ARRAY[j+1])) {\
                    SWAP(ARRAY[j], ARRAY[j+1], TYPE); \
                } \
            } \
        } \
    } while (0)
#define UP(a, b) (a>b)
#define DOWN(a, b) (a<b)
#define STUFF int i=0; i<SIZE; i++
#define PRINT_ARRAY printf("%d ", array[i])

int main() {
    int array[]={5,2,7,9,11};

    printf("Original: ");
    for (STUFF) {
      PRINT_ARRAY;
    }
    printf("\n");
    SORT(array, SIZE, int, UP);
    printf("Sorted (UP): ");
    for (STUFF) {
      PRINT_ARRAY;
    }
    printf("\n");
    SORT(array, SIZE, int, DOWN);

    printf("Sorted (DOWN): ");
    for (STUFF) {
      PRINT_ARRAY;
    }
    printf("\n");

    return 0;
}
