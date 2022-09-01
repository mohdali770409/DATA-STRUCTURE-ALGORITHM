#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int *p,*q;

p = new int[5];
q = new int[10];
	p[0]= 1;
	p[1]= 3;
	p[2]= 5;
	p[3]= 7;
	p[4]= 9;
	for(int i =0;i<5;i++){
		q[i] = p[i];
	}
	free(p);
	p = q;
	q = NULL;
	cout<<p[2];
	return 0;
	
	
	
}
