//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    static bool comp(pair<int,int> p,pair<int,int> q){
       return p.second<q.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        
        vector <pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back(make_pair(start[i],end[i]));
        }
        sort(temp.begin(),temp.end(),comp);
        int ans =1;
        int lastElement = temp[0].second;
        for(int i=1;i<n;i++){
            if(temp[i].first>lastElement) {
                ans++;
                lastElement = temp[i].second;
            }
        }
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends