#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array1[][3]={{3,5,2},{9,4,5},{1,2,3}};

    int i,j,k=0;

    for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
      {
       k++;
       printf("%d \n",array1[i][j]);

      }

    }
    printf(",,$$$$$$,,,,,,,\n");
    printf("%d\n",k);
    printf(",,$$$$$$,,,,,,,\n");

    int *heap_array1=(int*)malloc(3*sizeof(int));

    //printf("%d %d %d\n", heap_array1[0],heap_array1[1],heap_array1[2]);




    k=0;
    for (i=0;i<3;i++)
    {
      for (j=0;j<3;j++)
      {

       *(heap_array1+k)=array1[i][j];
        printf("%d    %d\n", *(heap_array1+k),(heap_array1+k));

        k++;

      }

    }
    printf(",,$$$$$$,,,,,,,\n");
    printf("%d\n",k);
    printf(",,$$$$$$,,,,,,,\n");



   /* //printf("%d %d %d\n", heap_array1[0][1],heap_array1[1][2],heap_array1[2][0]);
    printf("%d %d %d\n", heap_array1[0][0],heap_array1[0][1],heap_array1[0][2]);
    printf("%d %d %d\n", *heap_array1[0],*heap_array1[1],*heap_array1[2]);
    printf("%d %d %d\n", &heap_array1[0],&heap_array1[1],&heap_array1[2]);

   */
    printf("Hello world!\n");
    return 0;
}
