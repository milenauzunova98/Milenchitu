#include<stdio.h>

int main(){
  int a=2, b=3, i;
  for(i=a; (i%a)!=0 || (i%b)!=0; i++);
  printf("Nok=%d", i);
}