#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
	
	struct Node *lchild;
	int data;
	struct Node *rchild;
	
}*root= NULL;


void inorder(struct Node *p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
	
}
struct Node *Rinsert(struct Node *p,int key){
	struct Node *t = NULL;
	if(p==NULL){
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = key;
		t->lchild = t->rchild = NULL;
		return t;
		
	}
	if(key<p->data) p->lchild=Rinsert(p->lchild,key);
	else if(key>p->data) p->rchild = Rinsert(p->rchild,key);
	return p;
	
	
}
int main(){
	root = Rinsert(root,10);
	
	Rinsert(root,5);
	Rinsert(root,20);
	Rinsert(root,8);
	Rinsert(root,30);
	inorder(root);
	
}
