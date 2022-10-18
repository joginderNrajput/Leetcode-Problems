//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int solve(int n, int a[], int prev, int curr){
        if(curr == n){
            return 0;
        }
        int take = 0;
        if(prev == -1 || a[prev] < a[curr]){
            take = 1 + solve(n, a, curr, curr+1);
        }
        int notTake = 0+solve(n, a, prev, curr+1);
        return max(take, notTake);
        
        
    }
    int solveMem(int n, int a[], int prev, int curr, vector<vector<int>> &dp){
        if(curr == n){
            return 0;
        }
        if(dp[curr][prev+1] != -1){
            return dp[curr][prev+1];
        }
        int take = 0;
        if(prev == -1 || a[prev] < a[curr]){
            take = 1 + solveMem(n, a, curr, curr+1, dp);
        }
        int notTake = 0+solveMem(n, a, prev, curr+1, dp);
        return dp[curr][prev+1] =  max(take, notTake);
        
        
    }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
    //   return solve(n, a, -1, 0);
        return solveMem(n, a, -1, 0, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends