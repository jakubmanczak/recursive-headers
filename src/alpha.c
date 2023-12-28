#include <stdio.h>
#include "alpha.h"
#include "beta.h"

int returnFromAlpha(void){
  return 0xDEAD;
}

void callBetaFromAlpha(void){
  printf("%x\n", returnFromBeta());
  return;
}