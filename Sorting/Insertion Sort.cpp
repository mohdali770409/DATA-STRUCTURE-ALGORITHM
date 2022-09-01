#include <iostream>
using namespace std;

void InsertionSort(int A[],int n){
	int x,j;
	for(int i=1;i<n;i++){
		j = i-1;
		x = A[i];
		while(j>-1 && A[j]>x){
			A[j+1] = A[j];
			j--;
			
		}
		A[j+1] =x;
		
	}
	
	
}
void traverse(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<endl;
	}
	
}
int main(){
	
	int A[] = {8,5,7,3,2};
	InsertionSort(A,5);
	traverse(A,5);
	
}
