#include <iostream>
using namespace std;
int missingPair(int arr[],int n){
	int XOR= 0;
	for(int i=0;i<n;i++){
		XOR = XOR^arr[i];
	}
	return XOR;
}


int main(){
	int arr[]  = {2,8,2,5,6,5,7,7,6};
	int result =missingPair(arr,9);
	cout<<result;
	
	
}
