#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){
	if(size==0 || size ==1) return true;
	if(arr[0]>arr[1]) return false;
	else{
		
		bool res = isSorted(arr+1,size-1);
		return res;
	}
	
	
	
}
int main(){
	
	int arr[] = {1,2,10,5,6};
	bool ans = isSorted(arr,5);
	if(ans) cout<<"sorted";
	else cout<<"not sorted";
	return 0;
	
}
