#include <stdio.h>
#define ARRAY_SIZE 10

int FuncSquareRoot2(int f){
  int s=1;
  for(int i=0; i<=f; i++){
    s=s*2;
  }
  return s;
}

int main(){
  #ifdef ARRAY_SIZE
    if(ARRAY_SIZE<=10 && ARRAY_SIZE>=1){
      int arr[ARRAY_SIZE];
      for(int i=0; i<ARRAY_SIZE; i++){
        arr[i]=FuncSquareRoot2(i);
        printf("%d\n", arr[i]);
      }
    }else printf("ERROR");
  #endif
  return 0;
}


