#include <iostream>
using namespace std;
void fun(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d",A[i]);
	}
}
int main(){
	int A[5]= {5,4,7,3,1};
	fun(A,5);
	return 0;
}
