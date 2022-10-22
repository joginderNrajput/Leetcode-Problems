//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int solve(int n, vector<long long > &dp, int mod){
      if(n == 1){
          return 1;
      }
      if(n == 2){
          return 2;
      }
      
      if(dp[n] != -1){
          return dp[n]%mod;
      }
      int forOne = solve(n-1, dp, mod)%mod;
      int forTwo = solve(n-2, dp, mod)%mod;
      dp[n] = (forOne + forTwo)%mod;
      return dp[n]%mod;
  }
    int fillingBucket(int N) {
        vector<long long > dp(N+1, -1);
        int mod = 100000000;
        long long ans = solve(N, dp, mod);
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends