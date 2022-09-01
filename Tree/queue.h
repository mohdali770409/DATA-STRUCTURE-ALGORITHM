#ifndef Queue_h
#define Queue_h
#include <stdlib.h>
#include <stdio.h>
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
#endif
