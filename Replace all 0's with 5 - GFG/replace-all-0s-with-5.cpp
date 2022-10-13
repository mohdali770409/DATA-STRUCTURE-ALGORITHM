//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int sum=0;
    while(n!=0){
        int num = n%10;
        n = n/10;
        if(num==0) {
            sum = sum*10+5;
        }
        else sum = sum*10 + num;
        
        
    }
    int ans =0;
    int num2;
 while(sum!=0){
     num2 = sum%10;
     sum = sum/10;
     ans = ans*10+num2;
 }
 return ans;
}