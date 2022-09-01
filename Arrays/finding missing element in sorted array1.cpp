#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int A[10] = {1,2,3,4,5,6,7,9};
	int count = 1;
	for(int i =0;i<8;i++){
		if(A[i] != count) {
		cout<<count;
		}
		count ++;
	}
	return 0;
	
}
