#include <iostream>
#include <stdio.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	
};
void SortedInsert(struct Node **H,int x){
	
	struct Node *t,*q=NULL,*p=*H;
	t = new Node;
	t->data = x;
	t->next = NULL;
	if(*H==NULL) *H = t;
	else{
		while(p &&p->data<x){
			q=p;
			p= p->next;
		}
		if(p==*H) {
			t->next = *H;
			*H = t;
			
		}
		
		else{
			t->next = q->next;
			q->next = t;
			
		}
	}
	
}
int hashTable(int key){
	return key%10;
	
}
struct Node *Search(struct Node *p,int key){
	
	while(p!=NULL){
		if(key==p->data) return p;
		p = p->next;
	}
	
	return NULL;
}

void Insert(struct Node *H[],int key){
	int index;
	index = key%10;
//	index = hash(key);
	SortedInsert(&H[index],key);
}
int main(){
	
	struct Node *temp;
	struct Node *HT[10];
	int i;
	for(i=0;i<10;i++) HT[i] = NULL;
	Insert(HT,12);
	Insert(HT,22);
	Insert(HT,42);
	
	temp = Search(HT[hashTable(22)],22);
	cout<<temp->data;
	
	
}

