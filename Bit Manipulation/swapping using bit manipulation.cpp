#include <iostream>
using namespace std;

void swap(int a,int b){
	a = a^b;
	b= a^b;
	a = a^b;
	cout<<a<<"  "<<b;
	
	
}
int main(){
	swap(5,10);
	
	return 0;
}
