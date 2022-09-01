#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char s[10] = "mOdaSsiR";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>64 && s[i]<91){
			s[i] = s[i] +32;
		}
		else s[i] = s[i] - 32;
		
		
		
	}
	cout<<s;
	return 0;
}
