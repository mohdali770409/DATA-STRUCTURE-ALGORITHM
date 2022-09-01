#include <stdio.h>
#include <iostream>
using namespace std;
struct Node{
	
	struct Node *lchild;
	int data;
	int height;
	struct Node *rchild;
}*root=NULL;
int NodeHeight(struct Node *p){
	int hl,hr;
	hl =p && p->lchild?p->lchild->height:0;
	hr =p && p->rchild?p->rchild->height:0;
	
	
	return hl>hr?hl+1:hr+1;
	
}

int BalanceFactor(struct Node *p){
	int hl,hr;
	hl =p && p->lchild?p->lchild->height:0;
	hr =p && p->rchild?p->rchild->height:0;
	return hl-hr;
	
	
}
struct Node *LLRotation(struct Node *p){
	struct Node *pl = p->lchild;
	struct Node *plr = pl->rchild;
	pl->rchild =p;
	p->lchild = plr;
	p->height = NodeHeight(p);
	pl->height = NodeHeight(pl);
	if(root = p) root = pl;
	return pl;
	
}
struct Node *LRRotation(struct Node *p){
	return NULL;
}
struct Node *RRRotation(struct Node *p){
	return NULL;
}
struct Node *RLRotation(struct Node *p){
	return NULL;
}

struct Node *Rinsert(struct Node *p,int key){
	struct Node *t = NULL;
	if(p==NULL){
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = key;
		t->height  = 1;
		t->lchild = t->rchild = NULL;
		return t;
		
	}
	if(key<p->data) p->lchild=Rinsert(p->lchild,key);
	else if(key>p->data) p->rchild = Rinsert(p->rchild,key);
	p->height = NodeHeight(p);
	if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
	  return LLRotation(p);
	else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
	  return LRRotation(p);
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==-1)
	  return RRRotation(p);
	else if(BalanceFactor(p)==-2 && BalanceFactor(p->rchild)==1)
	  return RLRotation(p);
	

	return p;
	
	
}
void preOrder(struct Node *p){
	if(p){
		cout<<p->data;
		preOrder(p->lchild);
		preOrder(p->rchild);
		
		
		
	}
	
}
int main(){
	root = Rinsert(root,10);
	Rinsert(root,5);
	Rinsert(root,2);  
	preOrder(root);
	
	
}

