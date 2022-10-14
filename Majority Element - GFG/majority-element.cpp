//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        if(size==1) return a[0];
        sort(a,a+size);
        int count=1;
        for(int i=0;i<size-1;i++){
            if(a[i]==a[i+1]) {
                count++;
            }
            else count=0;
            
            if(count>size/2) return a[i];
            
        }
        if(a[size-1]==a[size-2]) count++;
        if(count>size/2) return a[size-1];
        
        return -1;
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends