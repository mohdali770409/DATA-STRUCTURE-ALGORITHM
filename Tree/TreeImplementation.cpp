#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "queue.h"
using namespace std;
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
void preorder(struct Node *p){
	
	if(p){
		cout<<p->data<<"  ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}
void inorder(struct Node *p){
	
	if(p){
		
		inorder(p->lchild);
		cout<<p->data<<"  ";
		inorder(p->rchild);
	}
}
void postorder(struct Node *p){
	
	if(p){
		
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<"  ";
	}
}
int main(){
	Tcreate();
	cout<<"pre order : "<<endl;
	preorder(root);
	cout<<endl<<"in order : "<<endl;
	inorder(root);
	cout<<endl<<"post order : "<<endl;
	postorder(root);
	
}
