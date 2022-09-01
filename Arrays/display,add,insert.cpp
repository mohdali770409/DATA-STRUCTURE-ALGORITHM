#include <iostream>
#include <stdlib.h>
using namespace std;
struct array {
	int A[10];
	int length;
	int size;
};
void display(struct array ar){
	for(int i=0;i<ar.length;i++) cout<<ar.A[i]<<endl;
	
}
void add(struct array *ar,int x){
	if(ar->size> ar->length){
		ar->A[ar->length++] = x;
	}
  
}
void Insert(struct array *ar,int index,int number){
	if(ar->size>ar->length && ar->length>index){
		for(int i = ar->length;i>=index;i--) ar->A[i] = ar->A[i-1]; }
		ar->A[2] = number;
	
	ar->length++;
}
void delte(struct array *ar){
	int index = 3;
	int length = 6;
	int A[10] = {4,3,6,8,9,10};
	for(int i=index;i<=length-1;i++){
		A[i] = A[i-1];
	}
	length--;
}
int main(){
	struct array ar = {{5,3,4,2,6},5,10};
	add(&ar,10);
	Insert(&ar,2,22);
	display(ar);
	delte(&ar);
	
	return 0;
	
	
	
}
