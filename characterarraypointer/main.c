#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char C[7];
    C[0]= 'J';
    C[1]= 'A';
    C[2]= 'M';
    C[3]= 'I';

     // we could also write C[5] = "JAMI" as string literals
    // just commenting C[4]= '\0'; this line
    // will not print accurately the full string as there is no indication of where the string is going to be finished

    C[4]= '\0';

    char C1[]="Hello";

    char* C2;
    C2=C1;
    int address1, address2;

    address1= &C1+1;
    address2= &C2+1;

    printf("%s \n  %s\n   %s\n  %d\n %d\n", C1, C1+1, C2+1, address1, address2);
    printf("%s",C+1);
    return 0;
}
