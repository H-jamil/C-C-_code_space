#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][3]={{2,3,5},{1,7,5}};

    int *p1;
    int (*p2)[3];

    printf("%d  %d  %d  %d  %d  %d  %d\n",a,*a,a[0],&(a[0][0]),*(a[0]),*(a[0]+1), a[0]+1);
    printf("%d  %d  %d  %d  %d  %d \n",a+1,*(a+1),a[1],*(a[1]),*(a[1]+1), a[1]+1);

    printf("%d   %d  %d  %d\n" , &p2,*p2, *(p2+1),*p2+1);
    printf("Hello world!\n");
    return 0;
}
