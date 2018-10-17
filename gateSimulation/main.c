
#include <stdio.h>
#include <stdlib.h>
#include "gates.h"

#define n1 8
#define n2 16
int main(){

char userOperationMode='0';
char signalGeneratorMode='0';
bool *a;
bool *b;
bool andResult,orResult,seconStageOr,seconStageAnd;
bool calculatedResult,calculatedResult_final;
bool value1,value2,combination;
int calculatedResultInt,buffer,randomValue;
time_t t;
srand((unsigned) time(&t));
printf(" Digital Circuit logic simulator\n");
printf("............................\n");
printf(" \n");
printf("Choose '1'  for Circuit 1\n");
printf("Choose '2'  for Circuit 2\n");
printf("Choose 'q'  for quitting \n");
printf(" \n");

//a_array=(bool *)malloc(sizeof(bool)*n);
//b_array=(bool *)malloc(sizeof(bool)*n);


while (userOperationMode!='q')
{
        printf("press for the operation you want to make: \n");
        scanf("%c", &userOperationMode);
/*
         printf("How You want the signal to be Generated?\n");
         printf("Press m for manual signal generation\n");
         printf("Press a for automated signal generation\n");

         scanf("%c", &signalGeneratorMode);
         printf(".............................\n");
*/
         if((userOperationMode=='1')||(userOperationMode=='2')||(userOperationMode=='q')||(userOperationMode=='\0'))
         {
            if(userOperationMode=='q'){return 0;}

         switch (userOperationMode)
         {
         case '1':


         a=(bool *)malloc(sizeof(bool)*n1);
         b=(bool *)malloc(sizeof(bool)*n1);
         if(a== NULL || b==NULL) {
              printf("malloc of size %d failed!\n", n1);
              return 0;
            }



         //if(signalGeneratorMode=='m')
         //{
         //printf("Input 8 bit (0 or 1) for signal A \n");
         //for (int loop=0;loop<n1;loop++)
         //{

         //printf("%d position bit=\n");
         //scanf("%d",&a[loop]);
          //}
         //printf("Input 8 bit (0 or 1) for signal B \n");
         //for (int loop=0;loop<n1;loop++)
         //{

         //printf("%d position bit=\n");
         //scanf("%d",&b[loop]);
          //}
         //}

         //else if (signalGeneratorMode=='a')
         //{
         for (int loop=0;loop<n1;loop++)
         {

          randomValue=rand()%2;
          a[loop]=randomValue;
          //srand((unsigned) time(&time));
          randomValue=rand()%2;
          b[loop]=randomValue;

          }
         //}
        // bool a[n1]={1,1,1,1,0,1,0,0};
         //bool b[n1]={1,1,1,1,0,1,0,0};
         printf("Your Signal A [A0 A1 A2...]=");
         for (int loop=0;loop<n1;loop++)
         {

         printf("%d",a[loop]);

         }
         printf("\nYour Signal B [B0 B1 B2 ...]=");
         for (int loop=0;loop<n1;loop++)
         {

         printf("%d",b[loop]);

         }
         andResult=AND_N(a,b,n1,2,0,0);
         buffer=andResult;
         printf("\nAND_N=%d\n",buffer);
         orResult=OR_N(a,b,n1,2,1,1);
         buffer=orResult;
         printf("OR_N=%d\n",buffer);
         calculatedResult=xor(andResult,orResult);
         buffer=calculatedResult;
         printf("Before NOT, XOR=%d\n",buffer);
         calculatedResult_final=not(calculatedResult);
         calculatedResultInt=calculatedResult_final;



         printf("The result of the First circuit =  %d\n", calculatedResultInt);
         free(a);
         free(b);
         break;



         case '2':


         a=(bool *)malloc(sizeof(bool)*n2);
         b=(bool *)malloc(sizeof(bool)*n2);
         if(a== NULL || b==NULL) {
              printf("malloc of size %d failed!\n", n2);
              return 0;
            }

         for (int loop=0;loop<n2;loop++)
         {
          //srand((unsigned) time(&time));
          randomValue=rand()%2;
          a[loop]=randomValue;
          //srand((unsigned) time(&time));
          randomValue=rand()%2;
          b[loop]=randomValue;

         }
        // bool a[n1]={1,1,1,1,0,1,0,0};
         //bool b[n1]={1,1,1,1,0,1,0,0};
         printf("Your Signal A [A0 A1 A2...]=");
         for (int loop=0;loop<n2;loop++)
         {

         printf("%d",a[loop]);

         }
         printf("\nYour Signal B [B0 B1 B2 ...]=");
         for (int loop=0;loop<n2;loop++)
         {

         printf("%d",b[loop]);

         }
         andResult=AND_N(a,b,n2,4,3,0);
         buffer=andResult;
         printf("\ntop AND_N=%d\n",buffer);
         orResult=OR_N(a,b,n2,4,2,1);
         buffer=orResult;
         printf("top OR_N=%d\n",buffer);
         calculatedResult=or(andResult,orResult);
         buffer=calculatedResult;
         seconStageOr=buffer;
         printf("2nd stage OR = %d\n",buffer);


         andResult=AND_N(a,b,n2,4,1,3);
         buffer=andResult;
         printf("bottom AND_N=%d\n",buffer);
         orResult=OR_N(a,b,n2,4,1,2);
         buffer=orResult;
         printf("bottom OR_N=%d\n",buffer);
         calculatedResult=and(andResult,orResult);
         buffer=calculatedResult;
         seconStageAnd=buffer;
         printf("2nd stage OR = %d\n",buffer);

         calculatedResult_final=or(seconStageAnd,seconStageOr);
         calculatedResultInt=calculatedResult_final;



         printf("The result of the Second circuit =  %d\n", calculatedResultInt);
         free(a);
         free(b);
         break;






         }

         }


         else
    {

     printf("Invalid input !!!! \n");

    }
/*
value1=1;
value2=0;
combination= ~(value1 ^ value2);
buffer=combination;
printf("test xnor=%d\n",buffer);
combination= not(value1);
buffer=combination;
printf("test not=    %d \n",buffer);
*/

 }
}
