#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
    struct Node *prev;
	int data;
    struct Node *next;
}*first = NULL;
void create(int array[],int n) {

	struct Node *t,*last;
	int i;
    first = (struct Node *)malloc(sizeof(struct Node));


	first->data = array[0];
	first->prev = first->next= NULL;
	last = first;
	for(i=1;i<n;i++){
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = array[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last =t;
		
	}
}
	void Display(struct Node *p){
		while(p!=NULL){
			cout<<p->data<<endl;
			p = p->next;
		}
		cout<<endl;
	}
	int length(struct Node *p){
		int len = 0;
		while(p){
			len++;
			p = p->next;
		}
		return len;
	}
	int main(){

		int array[] = {10,20,30,40,50};
		create(array,5);
		cout<<length(first)<<endl;
		Display(first);
		return 0;
	}


