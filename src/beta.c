#include <stdio.h>
#include "alpha.h"
#include "beta.h"

int returnFromBeta(void){
  return 0xBEEF;
}

void callAlphaFromBeta(void){
  printf("%x\n", returnFromAlpha());
  return;
}