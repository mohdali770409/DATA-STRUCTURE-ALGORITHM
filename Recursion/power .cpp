#include <iostream>
using namespace std;
int power(int m,int n){
	if(n==0 ) return 1;
	return power(m,n-1)*m;
	
}
int power1(int m,int n){
	if(n==0) return 1;
	else if(n%2==0) return power(m*m,n/2);
	else return power(m*m,(n-1)/2);
	
}
int main(){
	int r = power(2,9);
	int s = power(3,2);
	
	cout<<r<<endl;
	cout<<s<<endl;
	return 0;
}
