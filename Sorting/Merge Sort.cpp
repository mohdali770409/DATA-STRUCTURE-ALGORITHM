#include <iostream>
using namespace std;
void Merge(int A[],int l,int mid, int h){
	int i=l,j=mid+1,k=l;
	int B[100];
	while(i<=mid && j<=h){
		if(A[i]<A[j]) B[k++] = A[i++];
		else B[k++] = A[j++];
		
	}
	for( ;i<=mid;i++) B[k++] = A[i];
	for( ;j<=h;j++) B[k++] = A[j];
	for(int i=l;i<=h;i++){
		A[i]  = B[i];
	}
	
}
void ImergeSort(int A[],int n){
	int p,i,l,h,mid;
	for(p=2;p<=n;p = 2*p){
		for(i=0;i+p-1<n;i= i+p){
			l = i;
			h = i+p-1;
			mid = (l+h)/2;
			Merge(A,l,mid,h);
			
		}

			
		
	}
	if(p/2<n){
		Merge(A,0,p/2-1,n-1);
	}

}
void traverse(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
}
int main(){
	
	int A[] = {11,13,7,12,16,9,24,5,10,3},n= 10,i;
	ImergeSort(A,n);
	traverse(A,n);
	
}
