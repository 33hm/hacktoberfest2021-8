#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Node{
    int data;
    struct Node *next;
}*first = NULL;

// Creating a Linked List 
void create(int a[],int n){
    struct Node *p,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = 0;
    last = first;
    for(int i=1;i<n;i++){
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = a[i];
        p->next = 0;
        last->next = p;
        last = p;
    }
}

// Display By Iterative Way
void display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
}

// Display By Tail Recursive Way
/*void displayT(struct Node *p){
    if(p!=NULL){
        printf("%d ",p->data);
        displayT(p->next);
    }
}*/

// Display By Head Recursive Way
/*void displayH(struct Node *p){
    if(p!=NULL){
        displayH(p->next);
        printf("%d ",p->data);
    }
}*/

// Max Element in a Linked List
void max_element(struct Node *p){
    int max = INT_MIN;
    while(p!=NULL){
        if(max < p->data){
            max = p->data;
        }
        p = p->next;
    }
    printf("%d\n",max);
}



int main()
{
    int a[] = {1,2,3,4,5};
    create(a,5);
    max_element(first);
    return 0;
}
