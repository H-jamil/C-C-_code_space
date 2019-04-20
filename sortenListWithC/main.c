#include <stdio.h>
#include <stdlib.h>

typedef struct list_tag{

int data;
struct list_tag* next;
} ListNode;


typedef struct {

ListNode *head;
}slist;


void slistInsert(slist *sl, int da);
int slistDelete(slist *sl);
void slistPrint(slist *sl);
void slistInit(slist *sl);


int main()
{
    slist sortlist;
    int value;
    slistInit(&sortlist);
    printf("Please Enter numbers : 0 to finish \n");
    scanf("%d",&value);
    while(value!=0){
        slistInsert(&sortlist,value);
        scanf("%d",&value);
        }

    printf("Now the the numbers are sorted and  printing them \n");
    slistPrint(&sortlist);

    return 0;
}

slistInit(slist *sl){

sl->head=NULL;

}


void slistInsert(slist *sl, int da){

ListNode *n=(ListNode*)malloc(sizeof(ListNode));
ListNode *current;
if (n==NULL){
    printf("System is out of memory!");
    exit(1);
    }

n->data=da;
n->next=NULL;

if((sl->head==NULL) || (sl->head->data>=da)){

    n->next=sl->head;
    sl->head=n;

}

else{

    current=sl->head;
    while(current->next!=NULL && current->next->data<da)
        current=current->next;
    n->next=current->next;
    current->next=n;
   }

}

void slistPrint(slist *sl){

if (sl->head==NULL)
    printf("List is empty \n");
ListNode *temp;
temp=sl->head;

while(temp->next!=NULL){
 printf("%d \n",temp->data);
 temp=temp->next;
}
  printf("%d \n",temp->data);

}




