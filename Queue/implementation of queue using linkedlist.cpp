#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*front=NULL,*rear = NULL;
void enqueue(int x){
//	Node *t;
	Node *t = new Node;
	if(!t) cout<<"linkedlist is full";
	else{
		t->data = x;
		t->next = NULL;
		if(front==NULL) front = rear = t;
		else{
			rear->next = t;
			rear = t;
		}
	}
}
int dequeue(){
	int x = -1;
	if(front == NULL) cout<<"queue is empty";
	else{
		Node *p = new Node;
		p = front;
		front = front->next;
		x= p->data;
		free(p);

		
	}
	return x;
}
void display(){
	Node *p = new Node;
	p = front;
	while(p){
	
		cout<<p->data<<endl;
		p= p->next;
	}
	
	
}
int main(){
	enqueue(5);
	enqueue(10);
	enqueue(15);
	enqueue(20);
	enqueue(25);
	enqueue(30);
	display();
	cout<<"deleted value is "<<dequeue()<<endl;
	return 0;
	
}
