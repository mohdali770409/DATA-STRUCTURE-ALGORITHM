#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int length = 10;
    int A[10] = {-6,3,-8,10,5,-7,-9,12,-14,2};
    int i = 0;
    int j = length-1;
    while(i<j){
    while(A[i]<0){
        i++;
    }
    while(A[j]>0){
        j--;
    }
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        
    }
    for(i = 0;i<length-1;i++){
        cout<<A[i]<<endl;
    }
    return 0;
    
    
}
