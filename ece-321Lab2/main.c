
#include <stdio.h>
#include "gates.h"

#define n 8
int main(){

bool *a_array;
bool *b_array;
bool calculatedResult;
int calculatedResultInt;
a_array=(bool *)malloc(sizeof(bool)*n);
b_array=(bool *)malloc(sizeof(bool)*n);

bool a[n]={1,1,1,1,0,0,0,0};
bool b[n]={1,1,1,1,0,0,0,0};


calculatedResult=not(xor(AND_N(a,b,n,2,0,0)),(OR_N(a,b,n,2,1,1)));
calculatedResultInt=calculatedResult;

printf("The result of the circuit 1 =%d", calculatedResultInt);

return 0;
}
