#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

struct QuadraticRootsResult{
  double x1;
  double x2;
  int no_real_roots;
};

struct QuadraticRootsResult find_roots(double a,double b,double c);

#endif