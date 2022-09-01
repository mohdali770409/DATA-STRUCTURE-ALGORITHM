#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
	
	struct Node *lchild;
	int data;
	struct Node *rchild;
	
}*root= NULL;
struct stack {
	int size;
	int top;
	struct Node **Q;
	
	
};
void createStack(struct stack *stk,int n){
	stk->size = n;
	stk->top = -1;
	stk->Q = (struct Node **)malloc(stk->size*sizeof(struct Node *));
	
}

void push(struct stack *stk, struct Node *p){
	if(stk->top == stk->size -1) cout<<"stack is full"; 
	else {
		stk->top++;
		stk->Q[stk->top] =p;
	}

}
struct Node *pop(struct stack *stk){
	if(stk->top = -1) cout<<"stack is empty";
	else{
		return stk->Q[stk->top--];
	}
}


struct Node *stackTop(struct stack *stk){
	if(stk->top =-1) {
//		struct Node *t;
		Node *t = new Node;
		t->data = 2000000;
		t->lchild = t->rchild = NULL;
		return t;
	}
	else return stk->Q[stk->top];

}

void insert(int key){
	struct Node *t = root;
	struct Node *r,*p;
	if(root==NULL){
		p = (struct Node *)malloc(sizeof(struct Node));
		p->data = key;
		p->lchild = p->rchild= NULL;
		root = p;
		return;
	}
	while(t!=NULL){
			r=t;
			if(key<t->data) t = t->lchild;
			else if(key>t->data) t= t->rchild;
			else return;
			
		}
		p = (struct Node *)malloc(sizeof(struct Node));
		p->data = key;
		p->lchild = p->rchild= NULL;
		if(key<r->data) r->lchild = p;
		else r->rchild = p;	
}

void createPre(int Pre[],int n){
	struct stack stk;
	struct Node *p;
	int i;

//	Node *root = new Node;
	root->data = Pre[i++];
	root->lchild = root->rchild = NULL;
	p  = root;
	
	while(i<n){
		
		if(Pre[i]<p->data){
//			struct Node *t;
			Node *t = new Node;
			t->data = Pre[i++];
			t->lchild = t->rchild = NULL;
			p->lchild = t;
			push(&stk,p);
			p =t;
			
		}
		else{
			if(Pre[i]>p->data && Pre[i]<stackTop(&stk)->data){
//				struct Node *t;
				Node *t = new Node;
				t->data = Pre[i++];
				t->lchild = t->rchild = NULL;
				p->rchild = t;
				p = t;
			}
			else {
				p = pop(&stk);
			}
		}
	}	
}


void preorder(struct Node *p){
	if(p){
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}	
}


int main(){
	int Pre[8]  = {30,20,10,15,25,40,50,45};
	
	createPre(Pre,8);
	preorder(root);
	
//	insert(20);
//	insert(30);
//	insert(40);
//	insert(25);
//	insert(5);



	
}
