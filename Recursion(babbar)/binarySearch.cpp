#include <iostream>
using namespace std;

bool binarySearch(int arr[],int start,int end,int key){
	int mid = start+ (end-start)/2;
	if(start>end) return false;
	if(arr[mid]== key) return true;
	else if(arr[mid]<key) binarySearch(arr,mid+1,end,key);
	else if(arr[mid]>key) binarySearch(arr,start,mid-1,key);
	
}

int main(){
	int arr[] = {1,4,6,8,9};
	bool ans = binarySearch(arr,0,4,8);
	if(ans) cout<<"found";
	else cout<<"not found";
	return 0;
	
}
