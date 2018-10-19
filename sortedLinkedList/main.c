#include <stdio.h>
#include <stdlib.h>
typedef struct list_tag {
int data;
struct list_tag * next;
} ListNode;
typedef ListNode * slist;
void slInsert (slist * lp, int t);
void slPrint (slist * lp);
void slInit(slist * qp);

void main(){
        slist sl;
        int data;
        slInit(&sl);
        printf("Give me numbers. 0 = exit\n");
        scanf("%d",&data);

        while (data != 0){
            slInsert(&sl, data);
            scanf("%d",&data);
        }
        slPrint(&sl);
        printf("Bye\n");
}


void slInit(slist * qp){
*qp = NULL;
}


void slInsert (slist * lp, int t){
        ListNode * n = (ListNode *) malloc(sizeof(ListNode));
        if (n == NULL) {
        printf("Out of memory\n");
        exit(1);
        }
        n->data = t;
        while (*lp != NULL && (*lp)->data < t)
        lp = &((*lp)->next);
        n->next = *lp;
        *lp = n;
        }

        void slPrint (slist *lp){
            printf("Now I will print\n");

        while ((*lp) != NULL) {
            printf("%d\n",(*lp)->data);
            lp = &((*lp)->next);
                }
        }
