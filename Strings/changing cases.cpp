#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char s[10] = "modassir";
	for(int i =0;s[i]!='\0';i++){
		s[i] = s[i] - 32;
		
	}
	cout<<s;
	return 0;
	
}
