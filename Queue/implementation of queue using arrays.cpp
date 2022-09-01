#include <iostream>
#include <stdlib.h>
using namespace std;
struct Queue{
	int size;
	int front;
	int rear;
	int *Q;
	
};
void create(struct Queue *q,int size){
	q->size = size;
	q->rear = q->front = -1;
	q->Q = new int[q->size];

}
void enqueue(struct Queue *q,int x){
	if(q->rear == q->size-1){
		cout<<"queue is full";
	}
	else{
		q->rear++;
	    q->Q[q->rear]  = x;
	}
	
	
}
int dequeue(struct Queue *q){
	if(q->rear== q->front){
		cout<<"stack is empty";
		
	}
	else{
		q->rear++;
		int x = q->rear;
		return x;
	}
	
}
 void Display(struct Queue q){
 	for(int i =q.front+1;i<=q.rear;i++){
 		cout<<q.Q[i]<<endl;
	 }
	 cout<<endl;
 	
 }
int main(){
	struct Queue q;
	create(&q,5);
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	Display(q);
	return 0;

	
	
	
}
