#include <iostream>
using namespace std;
void Insert(int A[],int n){
	int temp,i=n;
	temp = A[n];
	while(i>1 && temp >A[i/2]){
		
		A[i]= A[i/2];
		i = i/2;
		
	}
	A[i] = temp;
	
}
int Delete(int A[],int n){
	int x,i,j,temp,val;
	val = A[1];
	x = A[n];
	A[1] = A[n];
	i=1, j = 2*i;
	while(j<n-1){
		
		if(A[j+1]>A[j]){
			j = j+1;
		}
		if(A[i]<A[j]){
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i = j;
			j = 2*i;
		
		}
		break;
		
	}
	A[n] = val;
	return val;
	
}
void traverse(int A[],int n){
	for(int i=1;i<=n;i++){
		cout<<A[i]<<" ";
		
	}
	
}
int main(){
	
	int A[]  = {0,10,20,30,25,5,40,35};
	int i;
	for(i = 2;i<=7;i++){
		Insert(A,i);
		
	}
	for(i=7;i>1;i--){
		Delete(A,i);
	}
//	cout<<"DELETED ELEMENT IS "<<Delete(A,7)<<endl;
	traverse(A,7);
	
	
	
}
