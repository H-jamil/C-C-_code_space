#include <stdio.h>
#include <stdlib.h>


void print(char* C)
{

while (*C != '\0')
 {

   printf("%c",*C);
   C++;
 }
 printf("\n");
}

int main()
{
    printf("Hello world!\n");
    char C[]="Hello";


    print(C);

    char *C1="NewYear";


    printf("%d %d %d\n",C1, C1+1,C1+2);
    //*(C1+4)='e';
    printf("%c\n",*(C1+4));

    return 0;
}
