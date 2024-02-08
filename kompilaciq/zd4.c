#include <stdio.h>
#include <math.h>

int main(){
  long string[5] = {1,2,3,4,5};
  for(int i=0; i<5; i++){
    long result = pow(i,4);
  printf("The result is %ld\n", result);
  }
  for(int i=0; i<5; i++){
    printf("string[%d] = %ld\n", i, string[i]);
  }
}

