//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr, int n){
	    vector<int>dp(n, 0);
	    dp[0] =  arr[0];
	    for(int i=1; i<n; i++){
	        int incl = dp[i-2] +arr[i];
	        int excl = dp[i-1] + 0;
	        dp[i] = max(incl, excl);
	    }
	    return dp[n-1];
	    
	}
	int findMaxSum(int *arr, int n) {
	    
	    return solve(arr, n);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends