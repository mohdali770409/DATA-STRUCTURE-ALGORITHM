#include <iostream>
#include <stdlib.h>
using namespace std;
struct array{
	int *A;
	int length;
	int size;
};
void Display(struct array arr){
	for(int i=0;i<arr.length;i++){
		cout<<arr.A[i];
	}
	
}
int main(){
	int i,n;
	struct array arr;
	arr.length= 0;
    cout<<"enter the size of array"	<<endl;
    cin>>arr.size;
	arr.A = new int[arr.size];
	cout<<"enter the number of element you want to print"<<endl;
	cin>>n;
	cout<<"insert the numbers you want to store";
	for(i =0;i<n;i++){
		cin>>arr.A[i];
	}
	arr.length = n;
	Display(arr);
	return 0;
	
	
}
