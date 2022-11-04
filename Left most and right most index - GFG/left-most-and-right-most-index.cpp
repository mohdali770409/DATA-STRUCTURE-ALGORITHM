//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    long long first(vector<long long> arr,long long x){
        
        long long start =0,end = arr.size()-1;
         long long temp=-1;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(arr[mid]==x){
                end = mid-1;
                temp = mid;
            }
            else if(arr[mid]<x) start = mid+1;
            else end = mid-1;
            
            
        }
        return temp;
    }
    long long second(vector<long long> arr,long long x){
        
        long long start =0,end = arr.size()-1;
         long long temp=-1;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(arr[mid]==x){
                start = mid+1;
                temp = mid;
            }
            else if(arr[mid]<x) start = mid+1;
            else end = mid-1;
            
            
        }
        return temp;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long temp1 =first(v,x);
        long long temp2 = second(v,x);
        
        if(temp1!=-1 && temp2 !=-1) return {temp1,temp2};
        else return {-1,-1};
        
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends