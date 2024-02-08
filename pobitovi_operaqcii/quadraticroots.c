// 

#include<stdio.h>
#include <math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c){
  struct QuadraticRootsResult result;
  
  int D = (b * b) - (4 * a * c);
  
  if (D < 0){
    result.no_real_roots = 1;
  }
  else if (D > 0){
    result.x1 = (-b + (sqrt(D))) / (2 * a);
    result.x2 = (-b - (sqrt(D))) / (2 * a);
    result.no_real_roots = 0;
  }
  else if(D == 0){
    result.x1 = -b / (2 * a);
    result.no_real_roots = 0;
  }
}
