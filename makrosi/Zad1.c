#include <stdio.h>
#define SIZE 5
#define NUMS 1,4,7,10,13
#define STUFF int i=0; i<SIZE; i++
#define PRINT_ARRAY printf("%d ", array[i]);

int main(){
    int array[SIZE]={NUMS};

    for (STUFF){
        PRINT_ARRAY
    }
    return 0;
}
