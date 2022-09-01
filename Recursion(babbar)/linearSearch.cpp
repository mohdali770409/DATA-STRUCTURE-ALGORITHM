#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
	if(size==0) return false;
	if(arr[0]==key) return true;
	else{
	 bool ans= 	linearSearch(arr+1,size-1,key);
	 return ans;
		
	}
	
	
}
int main(){
	int arr[] = {3,4,6,7,8};
	bool ans = linearSearch(arr,5,10);
	if(ans) cout<<"found";
	else cout<<"not found";
	return 0;
	
	
	
	
}
