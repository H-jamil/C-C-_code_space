#include <stdio.h>
#include <stdlib.h>
typedef struct list_tag {
int data;
struct list_tag * next;
} ListNode;

typedef struct
{
    ListNode *lp;
} stack;

void slInsert (stack * my_stack, int t);
void slPrint (stack * my_stack);
void slInit(stack * my_stack);



int main(void){

    stack my_stack;
    slInit(&my_stack);
    int data;

    printf("Give me numbers. 0 = exit\n");
    scanf("%d",&data);

    while (data != 0){
        slInsert(&my_stack, data);
        scanf("%d",&data);
        }
    printf("print started\n");
    slPrint(&my_stack);
    printf("Bye!!!!\n");
}

void slInit(stack * my_stack){
   my_stack->lp =NULL;
   }

void slInsert (stack * my_stack, int t)
{
ListNode *n,*currentNode;
n=(ListNode*)malloc(sizeof(ListNode));

if(n==NULL)
   {
       printf("System is out of memory\n");
       exit(1);
   }
n->data=t;
//n->next=NULL;
if (my_stack->lp==NULL || my_stack->lp->data >= t)
  {
    my_stack->lp=n;
    n->next=my_stack->lp;
  }

else
    {
        currentNode=&(my_stack->lp);
        //previousNode=currentNode;
        while(currentNode->data < t && currentNode->next!=NULL)
            {
                currentNode=currentNode->next;
            }


        /* {
          if (currentNode->data < n->data)
          {
           previousNode=currentNode;
          }
          currentNode=currentNode->next;
         }*/
        n->next=currentNode->next;
        currentNode->next=n;

    }
printf("started\n");
}

void slPrint (stack * my_stack){
printf("Now I will print\n");
ListNode *n;
n=my_stack->lp;
while (n->next != NULL) {
printf("%d\n",n->data);
n = n->next;
}
}
