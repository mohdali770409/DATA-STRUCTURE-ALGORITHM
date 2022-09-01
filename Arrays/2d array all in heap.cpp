#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int **A;
	A = new int *[3];
	A[0] = new int [4];
	A[1] = new int[4];
	A[2] = new int[4];
	A[0][1] = 20;
	A[2][3] = 35;
	cout<<A[2][3]<<endl;
	return 0;
	
}
