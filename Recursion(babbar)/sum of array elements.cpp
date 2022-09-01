#include <iostream>
using namespace std;

int sum(int arr[],int size){
	int result;
	if(size ==0 ){
		return 0 ;
	}
	if(size==1){
		return arr[0];
	}
	else{
		result =arr[0]+sum(arr+1,size-1);
		return result;
	 	
	}
}
int main(){
	int arr[] = {1,2,3,4,5};
	cout<<sum(arr,5);
	
	return 0;
	
	
	
}
