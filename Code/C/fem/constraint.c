#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Node : %d ", theConstraint->tag);
  printf("Const: %d ", theConstraint->pin);
  //printf("Disp: %f %f %f \n", theNode->disp[0], theNode->disp[1], theNode->disp[2]);
}

void constraintSetup(Constraint *theConstraint, int tag, int pin) {
  theConstraint->tag = tag;
  theConstraint->pin = pin;
//  theNode->coord[1] = crd2;
  theConstraint->next = NULL;
}
