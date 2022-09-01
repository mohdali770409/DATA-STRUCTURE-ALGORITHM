#include <iostream>
using namespace std;
int main(){
	int *p;
	p = new int[5];
	p[0] = 3;
	p[1] = 2;
	p[2]= 5;
	p[4] = 9;
	cout<<p[3]<<endl;
	return 0;
}
