//{ Driver Code Starts
// Initial function Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#define MOD 1000000007
class Solution{
public:
    long int solve(int N, vector<long int> &dp){
         if(N == 1){
            return 0;
        }
        if(N == 2){
            return 1;
        }
        
        if(dp[N] != -1){
            return dp[N];
        }
        dp[N] = ((N-1)%MOD *( (solve(N-1, dp)%MOD)+(solve(N-2, dp)%MOD))%MOD);
        return dp[N];
    }
    long int disarrange(int N){
       vector<long int>dp(N+1, -1);
       return solve(N, dp);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.disarrange(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends