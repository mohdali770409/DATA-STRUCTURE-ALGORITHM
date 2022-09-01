#include <iostream>
using namespace std;

void SelectionSort(int A[],int n){
	int i,j,k,temp;
	for(i=0;i<n-1;i++){
		for(j=k=i;j<n;j++){
			if(A[j]<A[k]) k=j;
			
		}
		temp = A[i];
		A[i] = A[k];
		A[k]  = temp;
	}
	
	
}
void traverse(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
		
	}
}
int main(){
	
	int A[]  = {8,6,3,2,5,4};
	SelectionSort(A,6);
	traverse(A,6);
	
}
