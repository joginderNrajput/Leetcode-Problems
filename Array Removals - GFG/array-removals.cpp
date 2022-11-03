//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int solve(int i, int j, vector<int>& arr, int k, vector<vector<int>> &dp){
        if(i >= j){
            return 0;
        }
        if(arr[j]-arr[i] <= k){
            return 0;
        }
        if(dp[i][j]  != -1){
            return dp[i][j];
        }
        dp[i][j] = 1+min(solve(i+1, j, arr, k, dp), solve(i, j-1, arr, k, dp));
        return dp[i][j];
    }
    int removals(vector<int>& arr, int k){
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>>dp (100, vector<int>(100, -1));
        return solve(0, n-1, arr, k, dp);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends