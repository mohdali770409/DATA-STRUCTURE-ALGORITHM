#include <iostream>
#include <stdlib.h>
using namespace std;
struct array{
	int A[10];
	int size;
	int length;
	
};
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	 
}
int linearSearch(struct array *ar,int key){
	int i;
	
	for(i=0;i<ar->length;i++){
		if(ar->A[i]==key){
			swap(&ar->A[i],&ar->A[0]);
			return i;
		}
		
		
	}
	return -1;
	
}
int main(){
	struct array ar = {{6,3,8,5,9},10,5};
	cout<<linearSearch(&ar,8);
	
	
	
}
