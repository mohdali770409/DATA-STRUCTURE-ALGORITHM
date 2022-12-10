//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        int mini=0;
        int buyCandies=0;
        int freeCandies = N-1;
        while(buyCandies<=freeCandies){
            mini = mini + candies[buyCandies];
            buyCandies++;
            freeCandies = freeCandies-K;
        }
        int maxi = 0;
        buyCandies = N-1;
        freeCandies = 0;
        while(freeCandies<=buyCandies){
            maxi = maxi + candies[buyCandies];
            freeCandies = freeCandies +K;
            buyCandies--;
        }
        vector <int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends