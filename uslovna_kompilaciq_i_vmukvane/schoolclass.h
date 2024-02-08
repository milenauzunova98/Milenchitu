#ifndef SCHOOL_CLASS
#define SCHOOL_CLASS

#include "person.h"

struct SchoolClass{
  struct person student[26];
  char par;
  int No;
  struct person klasen;
};
#endif
