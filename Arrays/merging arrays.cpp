#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int A[5] = {1,4,7,9,10};
	int B[5] = {2,3,5,6,8};
	int C[20];
	int i=0,j=0,k=0;
	int m=5,n=5;
	while(i<m && j<n) {

	if(A[i]<B[j]){
		C[k++] = A[i++];
		
	}
	else C[k++] = B[j++];
		}
		for( ;i<=m;i++){
			C[k++] = A[i++];
		}
			for( ;j<=n;j++){
			C[k++] = B[j++];
		}
		for(int k=0;k<10;k++){
			cout<<C[k];
		}
}
