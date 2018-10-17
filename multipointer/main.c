#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c_array_multi[][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
    printf(" %d\n %d\n %d\n " , *(c_array_multi),*(c_array_multi+1),*(c_array_multi+2) );
    printf("...............\n");

    printf("%d\n %d\n %d\n ",c_array_multi, c_array_multi+1,c_array_multi+2);

        printf("...............\n");

    printf("%d\n %d\n %d\n ",**c_array_multi, **(c_array_multi+1),**(c_array_multi+2));

        printf("...............\n");

    printf("%d\n %d\n %d\n ",c_array_multi[0], (c_array_multi+1)[0],(c_array_multi+2)[0]);

    printf("...............\n");

    printf("%d\n %d\n %d\n ",c_array_multi[0], (c_array_multi+1)[1],(c_array_multi+2)[1]);

    printf("...............\n");

    printf("%d\n %d\n %d\n %d\n",c_array_multi, **((c_array_multi[0])+1), *((c_array_multi[0][0])+1),**((c_array_multi[1])+1));



    //, , %d\n %d\n %d\n %d\n"
    printf("Hello world!\n");

    return 0;
}
