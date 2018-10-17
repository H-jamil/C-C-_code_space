#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int gcd (int a, int b){

int x=a;
int y=b;

while(x!=y)
{
if (x>y) x=x-y;
else
y=y-x;

}

return x;

}

bool coprimes(int a, int b)
{

return gcd(a,b)==1;

}

int factorial(int a)

{
if(a>0) return a*factorial(a-1);
else return 1;

}

int main()
{
    if (coprimes(5,10)) printf("True\n");
    else printf("False\n");
      if (coprimes(9,10)) printf("True\n");
    else printf("False\n");
    int factorialResult= factorial(5);
    printf("%d\n",factorialResult);
    return 0;
}
