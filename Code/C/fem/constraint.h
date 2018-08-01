#ifndef _CONSTRAINT
#define _CONSTRAINT

#include <stdio.h>

typedef struct constraint {
  int tag;
  int pin;

  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
void constraintSetup(Constraint *, int tag, int pin);

#endif
