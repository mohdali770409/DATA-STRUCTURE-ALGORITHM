#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(struct Node *p){
	while(p!=NULL){
		printf("%d",p->data);
		p = p->next;
	}
}
Node* Insert(struct Node *p,int x){
	Node *t = new Node;
	Node *last = new Node;
	t->data = x;
	t->next = NULL;
	if(first = NULL){
		first = last = t;
	}
	else{
		last->next = t;
		last = t;
	}
}
void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 printf("%d ",p->data);

 }
}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2};
 create(A,8);

 Display(first);
 Insert(first,10);
 Insert(first,25);

 return 0;
}
