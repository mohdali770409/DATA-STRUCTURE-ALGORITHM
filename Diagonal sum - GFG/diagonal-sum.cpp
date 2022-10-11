//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        
        
        
        int n = matrix.size();
       int  i=0,j=0;
        int sum1=0,sum2=0;
       while(i<n){
           sum1 += matrix[i++][j++];
           
       }
       i=0,j = n-1;
       while(j>=0){
           sum2+= matrix[i++][j--];
           
           
           
       }
       return sum1+sum2;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.DiagonalSum(matrix);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends