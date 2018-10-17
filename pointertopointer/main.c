#include <stdio.h>
#include <stdlib.h>

int main()


{

    printf("Hello world!\n");
    printf("///////////////\\\\\\\\\\\\\ \n\n");

    int x=1025;
    int *p;
    int **q;
    int ***r;
    p=&x;
    q=&p;
    r=&q;

    printf(" address of x = %d\n address of p= %d\n value stored in p= %d\n value stored in *p = %d\n ", &x,&p,p,*p);
    printf(" value stored in q = %d\n value stored in *q= %d\n value stored in **q = %d\n address of q = %d\n ", q,*q,**q,&q);
    printf(" address of r = %d\n value stored in r= %d\n value stored in *r= %d\n value stored in **r = %d\n value stored in ***r = %d\n ", &r,r,*r,**r,***r);


    return 0;
}
