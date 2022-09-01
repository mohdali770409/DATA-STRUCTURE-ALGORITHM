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
int dlte(struct array *ar,int index){
	
	if(index<ar->length){
		int x = ar->A[index];
		for(int i = index;i<ar->length;i++){
		ar->A[i] = ar->A[i+1];
	}
	ar->length--;
	return x;
	
	}
	return 0;	
}
int location(struct array ar, int pos){
	for(int i=0;i<ar.length;i++){
		if(ar.A[i]==pos) return i;
	}
	return -1;
}
int main(){
	
	struct array ar = {{5,3,4,2,6},5,10};
	
	cout<<"enter location which you want to delete"<<endl;
	int index;
	cin>>index;
	cout<<"the deleted value is "<<dlte(&ar,index)<<endl;
	display(ar);
	int pos;
	cout<<"enter element which you want to find"<<endl;
	cin>>pos;
	cout<<"location of array is : "<<location(ar,pos)<<endl;
	
	return 0;
	
	
	
}
