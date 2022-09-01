#include <iostream>
#include <stdio.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	
	
};
int findMax(int A[],int n){
	int max = -32768;
	for(int i=0;i<n;i++){
		if(A[i]>max){
			max = A[i];
		}
	}
	return max;
	
}
void Insert(struct Node **Bins,int x){
	    Node* t = new Node;

	
		t->data = x;
		t->next = NULL;
//	Node *t = new Node;
	
	if(Bins[x]==NULL){
	
		Bins[x] = t;
		
		
	}
	else{
		struct Node *p;
	
		p  = Bins[x];
		while(p->next!=NULL){
			
			p = p->next;
			
		}
	
		p->next = t;
	}
}
int Delete(struct Node **t,int i){
	int x;
		
	struct Node *p = t[i];

	t[i] = t[i]->next;
	x = p->data;
	delete p;

	
	return x;

	
	
}
void BinSort(int A[],int n){
	int max,i,j;
//	struct Node **Bins;
	max = findMax(A,n);
	
	Node** Bins;
	Bins = new Node*[max+1];
	
	for(i=0;i<max+1;i++) Bins[i] = NULL;
	
	for(i=0;i<n;i++) Insert(Bins,A[i]);
	
	i=0,j=0;
	
	while(i<max+1){
		while(Bins[i]!=NULL){
			A[j++] = Delete(Bins,i);
		}
		i++;
	}
	delete [] Bins;
}

int main(){
	int A[] = {2,5,8,12,3,6,7,10};
	BinSort(A,8);
	for(int i=0;i<8;i++) cout<<A[i]<<" ";
	return 0;
	

}
