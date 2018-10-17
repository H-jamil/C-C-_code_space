#include <stdio.h>
#include <stdlib.h>
int sumofarray(int A[]);

void print(char C[])

{
 int i=0;
 while (*C!='\0')
 {
 printf(" %c\n",*C);
 C++;
 }


}
int main()
{

    int a=1025;
    int *ptr_a=&a;
    printf("The address = %d\n The value = %d\n" ,ptr_a, *ptr_a);
    char *ptr_b;
    ptr_b=(char*)ptr_a;
    printf("The address = %d\n The value = %d\n" ,ptr_b, *ptr_b);
    printf("The address = %d\n The value = %d\n" ,ptr_b+1, *(ptr_b+1));
    //printf("Hello world!\n");

    void *void_pointer; //couldn't be used for de-referencing
    void_pointer=ptr_a;
    printf("The address at void_pointer = %d\n where this pointer is pointing",void_pointer);

    //pointer to pointer ///////////////'''''\\\\\\\\\\\\\\\\\\\\\\\\pointer to pointer \\

     printf ("\n////////////\\\\\\\\\\\\\\\\\\\n");

    int x=15;

    int* p;
    p=&x;
    printf("value of p or Address of x is %d\n", p);
    printf("value of *p or x is %d\n", *p);

    int** q;
    q=&p;
    printf("value of q is address of P %d\n", q);
    printf("value of *q or address of x is %d\n", *q);
    printf("value of **q or X is %d\n",**q);

    int*** r;
    r=&q;
    printf("value of r is address of q %d\n", r);
    printf("value of *r or address of P is %d\n", *r);
    printf("value of **r or address of X is %d\n",**r);
    printf("value of ***r or X is %d\n",***r);

    printf("X=%d\n",x);
    printf("X=%d\n",*p+5); //add 5 to *p or 15
    **q=*p+5; //*p is still 15
    printf("X=%d\n",x);
    ***r=**q+5;
    printf("X=%d\n",x);

    printf("..... /////// \\\\\\\\\\.......\n");

    //pointer and arrays

    int A[]={2,4,6,8,7};
    int *pt= &A;//  // int *pt=A; would be same // assign pt = address of A[0] only
    int i;
    printf("A = %d  && Address of A[0]=%d\n" ,A,&A[0]);  // should return same thing
    for (i=0;i<=4;i++)
    {
    printf("Address is %d\n",pt+i); // as pt is integer pointer pt+i will go through first address A[0]=220 say then in next iteration
                                    // it will go through pt+1 or address of A[1]=224 and so on
    printf("Address is %d\n",&A[i]);
    printf("Address is %d\n",A+i);  // A is the address of A[0] ; so A+i will be the address of

    printf("value is %d\n",*(pt+i));
    printf("value is %d\n",A[i]);
    printf("value is %d\n",*(A+i));

    }

    printf("//////////////////////////\\\\\\\\\\\\\\\\\\\\\n");



    int collection[]={1,4,6,7,8};
    int total;

    total=sumofarray(collection);
    printf("Sum of the ELements are %d\n",total);

    printf("//////////////////////////\\\\\\\\\\\\\\\\\\\\\n");


    char C[8]="Hello";
    printf("size of array C is %d\nSize of one element of the array is %d\n",sizeof(C),sizeof(C[0]));
    printf("%s\n",C);
    C[0]='H';
    C[1]='E';
    C[2]='L';
    C[3]='L';
    C[4]='O';
    printf("%s\n",C);
    print(C);

    return 0;




}

int sumofarray(int A[]) //A[i] is same as *(A+i)
{
    int i=0, sum=0 ;
    int size;
    size=sizeof(A)/sizeof(A[0]);
    printf("size is %d\n A size is %d\n  A[0] size is %d\n",size,sizeof(A),sizeof(A[0]));

    for (i=0;i<size;i++)
    {
    sum+=A[i];
    }
    return sum;

}
