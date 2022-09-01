#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
	int data;
	struct Node *next;
}*top = NULL;
void push(int x){
	struct Node *t;
	t = (struct Node*)malloc(sizeof(struct Node));
	if(t==NULL){
		cout<<"stack is full";
	}
	else{
		t->data = x;
		t->next = top;
		top =t;
	
	}
}
int pop(){
	int x;
	Node *t = new Node;
	if(top==NULL){
		cout<<"stack is empty";
	}
	else {
		t = top;
		top = top->next;
		x = t->data;
		free(t);
		
	}
	return x;
}
void Display(){
	struct Node *p;
	p = top;
	while(p!=NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}
int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	Display();
	cout<<pop()<<endl;
}
