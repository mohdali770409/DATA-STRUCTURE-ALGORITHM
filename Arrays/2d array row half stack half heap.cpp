#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int *A[3];
	
	A[0] = new int[4];
	A[1] = new int[4];
	A[2]= new int[4];
	A[0][2] = 13;
	A[1][3] = 15;
	cout<<A[1][3]<<endl;
	return 0;
}
