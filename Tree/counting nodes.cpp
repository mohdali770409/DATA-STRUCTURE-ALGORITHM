#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
	struct Node *lchild;
	int data;
	struct Node *rchild;
};
struct queue{
    int size;
    int front;
    int rear;
    struct Node **Q;
};
void create(struct queue *q,int size){
    q->size = size;
    q->Q = (struct Node **)malloc(q->size*sizeof(struct Node *));
    q->front = q->rear = 0 ;
    
}
void enqueue(struct queue *q,struct Node *x){
    if((q->rear+1)%q->size== q->front){
        printf("queue is full");
        
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
    
}
Node * dequeue(struct queue *q){
	Node *x=NULL;
    if(q->front ==q->rear) printf("queue is empty");
    else{
        
        q->front=(q->front+1)%q->size;
        return q->Q[q->front];
    }
}
int isEmpty(struct queue q)
{
 return q.front==q.rear;
}

struct Node *root = NULL;
void Tcreate(){
	
	struct Node *p,*t;
	int x;
	struct queue q;
	create(&q,100);
	cout<<"enter root value";
	cin>>x;
	root = (struct Node *)malloc(sizeof(struct Node));
	root->data = x;
	root->lchild = root->rchild= NULL;
	enqueue(&q,root);
	while(!isEmpty(q)){
		
		p = dequeue(&q);
		cout<<"enter left child of "<<p->data<<": "<<endl;
		cin>>x;
		if(x!=-1){
			t= (struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild= t->rchild = NULL;
			p->lchild = t;
			enqueue(&q,t);
			
		}
		cout<<"enter right child of "<<": "<<p->data<<endl;
		cin>>x;
		if(x!=-1){
			t= (struct Node *)malloc(sizeof(struct Node));
			t->data=x;
			t->lchild= t->rchild = NULL;
			p->rchild = t;
			enqueue(&q,t);
			
		}
		
	}
	
}

int count(struct Node *p){
	int x,y;
	if(p){
		x = count(p->lchild);
		y = count(p->rchild);
		return x+y+1;
		
	}
	return 0;
	
	
}


int main(){
	Tcreate();
	cout<<count(root);

    
}
