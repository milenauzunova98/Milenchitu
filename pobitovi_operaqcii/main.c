#include<stdio.h>
#include "quadraticroots.h"

int main(){

  {
    int a = 2, b = -3, c = 7;
    struct QuadraticRootsResult Result = find_roots((int) a,(int) b,(int) c);
  
    if(Result.no_real_roots){
      printf("No Real Roots");
    }
    else {
      printf("Root 1: %.2f, Root 2: %.2f", Result.x1, Result.x2);
    }
  }
  
  printf("\n");
  
  {
    float a = 2.0, b = -3.0, c = 7.0;
    struct QuadraticRootsResult Result = find_roots((float) a,(float) b,(float) c);

    if(Result.no_real_roots){
      printf("No Real Roots");
    }
    else {
      printf("Root 1: %.2f, Root 2: %.2f", Result.x1, Result.x2);
    }
  }

  printf("\n");

  {
    double a = 2.0, b = -3.0, c = 7.0;
    struct QuadraticRootsResult Result = find_roots((double) a,(double) b,(double) c);

    if(Result.no_real_roots){
      printf("No Real Roots");
    }
    else {
      printf("Root 1: %.2f, Root 2: %.2f", Result.x1, Result.x2);
    }
  }

  
}