#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*void first_function () //call back function

{
printf("If this line is prionted then it was through call-back function\n");

}

void caller_function(void (*Ptr1)())
{

 Ptr1();
}*/

// for using library functions like qsort in stdlib presented in C, call-back functions are absoulute necessary

int absolute_compare(int a , int b)
{
if (abs(a)>abs(b)) return -1;
else
return 1;

}

void sort(int *A, int size, int(*ptr34)(int, int))

{
int i,j,temp;

for(i=0;i<size;i++)

  for (j=0;j<size-1;j++)
   {
    if (ptr34(A[j],A[j+1])>0)
     {
       temp=A[j];
       A[j]=A[j+1];
       A[j+1]=temp;



     }



   }


}




int compare(const void* a, const void* b) //this is the call-back function for qsort . qsort will call this function and will pass two void
                                           // type pointers for comparing with one another
{

int A= *((int*)a);
int B= *((int*)b);
return abs(B)-abs(A);

}

int main()
{
    int A[]={1,7,-5,8,-67,45,34,89,23,-11,2,-8,4};
    int B[]={1,7,-5,8,-67,45,34,89,23,-11,2,-8,4};
    int size,i;

    size=sizeof(A)/sizeof(A[0]);

    sort(A,size,absolute_compare);

    qsort(B,size,sizeof(int),compare);


    for (i=0;i<size;i++)

    {
     printf("%d   ",A[i]);
    }

    printf("\n.......\n");

    i=0;
    for (i=0;i<size;i++)

    {
     printf("%d   ",B[i]);
    }


    //printf("%d\n", size);

    /*
    void (*ptr)();
    ptr= & first_function;
    caller_function(ptr);


    printf("Hello world!\n");*/

    return 0;
}
