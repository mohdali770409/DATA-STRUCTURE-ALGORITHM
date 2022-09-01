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

int Height(struct Node *p){
	if(p==NULL) return 0;
	int x,y;
	x = Height(p->lchild);
	y = Height(p->rchild);
	if(x>y) return x+1;
	else return y+1;
	
	
}
struct Node *inPredecessor(struct Node *p){
	while(p && p->rchild){
		p = p->rchild;
	}
	return p;
	
}
struct Node *inSuccessor(struct Node *p){
	while(p &&p->lchild){
		
		p = p->lchild;
	}
	return p;
	
}

struct Node *Delete(struct Node *p,int key){
	struct Node *q;
	if(p==NULL) return NULL;
	if(!p->lchild &&!p->rchild) {
		if(p==root) root = NULL;
		free(p);
		return NULL;
		
	}
	if(key<p->data) p->lchild = Delete(p->lchild,key);
	else if(key>p->data) p->rchild = Delete(p->rchild,key);
	else{
		if(Height(p->lchild)>Height(p->rchild)) {
			q = inPredecessor(p->lchild);
			p->data = q->data;
			p->lchild = Delete(p->lchild,q->data);
		
		}
		else{
			q = inSuccessor(p->rchild);
			p->data = q->data;
			p->rchild = Delete(p->rchild,q->data);	
		}
	}
	
	return p;
	
	
}





int main(){
	root = Rinsert(root,10);
	
	Rinsert(root,5);
	Rinsert(root,20);
	Rinsert(root,8);
	Rinsert(root,30);
	inorder(root);
	Delete(root,30);
	cout<<endl<<"after deletion of node :"<<endl;
	inorder(root);
	
	
	
	
}
