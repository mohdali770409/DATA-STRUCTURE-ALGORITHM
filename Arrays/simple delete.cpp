#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int index = 3;
	int length = 6;
	int A[10] = {4,3,6,8,9,10};
	for(int i=index;i<=length-1;i++){
		A[i] = A[i-1];
	}
	length--;
	
	
}
