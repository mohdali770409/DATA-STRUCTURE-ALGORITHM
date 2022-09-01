#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int length = 5;
	int A[10] = {5,2,6,8,4};
	for(int i = length;i>1;i--){
		A[i] = A[i-1];
		
	}
	A[2]= 10;
	length++;
	cout<<A[2]<<A[4];
	return 0;
	
	
	
}
