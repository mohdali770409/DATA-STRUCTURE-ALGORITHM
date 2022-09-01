#include <iostream>
using namespace std;
void BubbleSort(int A[],int n){
	int flag,temp;
	for(int i=0;i<n-1;i++){
		flag =0;
		for(int j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				flag = 1;
				
			}
		}
		if(flag==0) break;
	}


}
void traverse(int A[],int n){
		for(int i=0;i<n;i++)
		 	cout<<A[i]<<endl;
}
int main(){
	int A[] = {8,5,7,3,2};
	BubbleSort(A,5);
	traverse(A,5);
	
	
	
}
