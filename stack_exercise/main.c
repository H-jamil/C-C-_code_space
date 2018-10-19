#include <stdio.h>
#include <stdlib.h>




typedef struct List_tag{

        int data;
        struct List_tag *next;


  } ListNode;


  typedef struct {


  ListNode *first;

  } stack;

void stackInit(stack *st);
void stackInsert(stack *st, int t);
int stackDelete(stack *st);
void printstack(stack * st);


int main(void)
{
    /*long *a,b;
    b=10;
    a=&b;
    printf("%d\n",a);
    printf("%d\n",&b);
    printf("%d\n",*a);
    printf("................\n");

    printf("NULL is %p\n",(int *)NULL);
    printf("\\0 is %d\n",'\0');
    printf("Size of int = %ld\n",sizeof(int));
    printf("Size of NULL = %ld\n",sizeof(NULL));
    */

    /*ListNode node1,*node1_ptr,node2;

    node1.data=10;
    node1.data1=12;
    node1.data2=123;
    node1.data3=123;
    node1.data4=23;
    node1.next=&node2;
    node2.data=15;
    printf("size of node is %d, address of node data is %d, address of node data1 is %d, address of node data2 is %d, address of node data3 is %d,address of node data4 is %d,address of node next is %d \n",sizeof(node1),&node1.data,&node1.data1,&node1.data2,&node1.data3,&node1.data4,&node1.next);
    printf("............................\n");
    */
    stack mystack;
    int data;
    stackInit(&mystack);

    printf("Insert Number: 0 to finish \n");
    scanf("%d",&data);

    while(data!=0)
        {
        stackInsert(&mystack,data);
        scanf("%d",& data);
        }

    printstack(&mystack);

    while (mystack.first !=NULL)
          printf("%d \n",stackDelete(&mystack));
    printstack(&mystack);

return(0);
    }

void stackInit(stack *st)

    {
        st->first=NULL;
    }
void stackInsert(stack *st, int t)
    {
    ListNode *n;

    n=(ListNode*)malloc(sizeof(ListNode));
    if(n==NULL)
        {
            printf("System is out of memory \n");
            exit(1);
        }
    n->data=t;
    n->next=st->first;
    st->first=n;
     }

int stackDelete(stack *st)

        {
         ListNode *temp;
         int removedNodeData;
         if (st->first==NULL){
            printf("There is Nothing to delete");
            exit(1);
         }
         else
            {
              temp=st->first;
              removedNodeData=st->first->data;
              st->first=st->first->next;
              free(temp);

            }

            return removedNodeData;
           }
void printstack(stack * st){
        ListNode *tmp;
        if(st->first==NULL)
            printf("stack is Empty \n");

        else{
                tmp=st->first;
                printf("%d   ",tmp->data);
            while(tmp->next !=NULL){
                tmp=tmp->next;
                printf("%d   ",tmp->data);
                }
            printf("\n");
            }


}
