#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int A[10] = {3,2,4,6,7};
	int length = 5;
	int temp =A[0] ;
	for(int i=0;i<=length-1;i++){
		A[i] = A[i+1];
		
	}
	A[length-1] = temp;
	for(int i =0;i<=length-1;i++){
		cout<<A[i];
	}

	return 0;
	
}
