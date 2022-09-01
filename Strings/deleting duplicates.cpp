#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char s[] = "svvo";
	   int H[26] = {0},i;
    
    for( i =0;s[i]!='\0';i++){
    	
    		H[s[i]-97]++;
		
        
        
    }
    for(i =0;i<26;i++){
    	
        if(H[i]>0){
            
            printf("%c",i+97);
          
        }
    }
    
    return 0;
}
