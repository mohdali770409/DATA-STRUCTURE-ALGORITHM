#include <iostream>
#include <stdlib.h>
using namespace std;
struct Queue {
	int f;
	int R;
	int size;
	int *Q;
};
void create(struct Queue *q,int x){
	q->size = x;
	q->Q = new int[q->size];
	q->f = q->R = 0;
	
	
}

void enqueue(struct Queue *q,int x){
	if((q->R+1)%q->size == q->f){
		cout<<"Queue is full";
		
	}
	else{
		q->R = (q->R+1)%q->size;
		q->Q[q->R] = x;
	}
	
}
int dequeue(struct Queue *q){
	int x = -1;
	if(q->R == q->f){
		cout<<"queue is empty";
	}
	else{
		q->f = (q->f+1)%q->size;
		x = q->Q[q->f];
	}
	return x;
}
void display(struct Queue q){
	for(int i =q.f+1;i<q.size;i++){
		cout<<q.Q[i]<<endl;
	}
}
int main(){
	struct Queue q;
	create(&q,5);
	enqueue(&q,10);
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	display(q);
	cout<<"deleted value is "<<dequeue(&q)<<endl;
	return 0;
	
	
}
