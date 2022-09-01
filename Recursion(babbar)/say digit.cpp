#include <iostream>
#include <string>
using namespace std;
void sayDigit(int n,string arr[]){
	
	int digit = n%10;
	n = n/10;
	sayDigit(n,arr);
	cout<<arr[digit]<<" ";
	
}
int main(){
	int n= 3245;
	string arr[] = {"one","two","three","four","five","six","seven","eight","nine"};
	sayDigit(n,arr);
	return 0;
	
	
	
}



