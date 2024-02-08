#include <stdio.h>
#define SUM(A,B) (A+B)*(A+B)

int main(){
  int a,b;
  printf("Enter a: "); \
  scanf("%d", &a);
  printf("Enter b: "); \
  scanf("%d", &b);
  printf("Sum = %d", SUM(a,b));
}