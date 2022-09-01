#include <iostream>
#include <stdlib.h>
using namespace std;
int fun(int n){
	static int a =0;
	if(n>0){
		a++;
		return fun(n-1) +a;
	}
	return 0;
}
int main(){
	int x = 5;
	cout<<fun(x);
	return 0;
	
	
}
