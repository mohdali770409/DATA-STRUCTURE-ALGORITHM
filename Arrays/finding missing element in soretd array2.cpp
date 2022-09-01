#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int A[20] = {6,7,8,9,10,12,13,14,15,16,17};
	int l = 6,h = 17,n =11;
	
    for (int i = 0;i<n;i++){
    	if(A[i]-i!=l){
    		cout<<l+i;
    		return 0;
    		
    		
		}
	}
	return 0;
	
}
