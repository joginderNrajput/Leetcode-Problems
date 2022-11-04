//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(int index, int target, int arr[], int N){
        if(index >= N){
            return 0;
        }
        if(target < 0){
            return 0;
        }
        
        if(target == 0){
            return 1;
        }
        
        bool incl = solve(index+1, target-arr[index], arr, N);
        bool excl = solve(index+1, target, arr, N);
        
        return incl or excl;
    }
    bool solveMem(int index, int target, int arr[], int N, vector<vector<int>> &dp){
        if(index >= N){
            return 0;
        }
        if(target < 0){
            return 0;
        }
        
        if(target == 0){
            return 1;
        }
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        bool incl = solveMem(index+1, target-arr[index], arr, N, dp);
        bool excl = solveMem(index+1, target-0, arr, N, dp);
        
        return dp[index][target] = incl or excl;
    }
    
    int solveTab(int index, int N, vector<int> &arr, int total){
        vector<vector<int>> dp(N, vector<int>(total+1, 0));
        for(int i=0; i<N; i++){
            dp[i][0] = 1;
        }
        
        for(int index = N; index >= 0; index--){
            for(int target = 0; target <= total/2; target++){
                bool incl = dp[index+1][target-arr[index]];
                bool excl = dp[index+1][target];
                
                dp[index][target] = incl or excl;
            }
        }
        return dp[0][total/2];
    }
    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for(int i=0; i<N; i++){
            total += arr[i];
        }
        
        if(total&1){
            return 0;
        }
        
        int target = total/2;
        // return solve(0, target, arr, N);
        vector<vector<int> > dp(N, vector<int>(target+1, -1));
        return solveMem(0, target, arr, N, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Endshttps://auth.geeksforgeeks.org/user/jogindersinghudh2002/practice