#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
	
	struct Node *lchild;
	int data;
	struct Node *rchild;
	
}*root= NULL;
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

void inorder(struct Node *p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
	
}
int main(){
	
	insert(20);
	insert(30);
	insert(40);
	insert(25);
	insert(5);
	inorder(root);
	
}
