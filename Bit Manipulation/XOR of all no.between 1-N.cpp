#include <iostream>
using namespace std;

void XOR(int n){
	if(n%4==0) cout<<n;
	if(n%4==1) cout<<1;
	if(n%4==2) cout<<n+1;
	if(n%4==3) cout<<0;
	
	
}


int main(){
	
	XOR(8);
	return 0;
	
}
