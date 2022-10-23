//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void explore(int value, int &n, int &m, vector<int> &ans){
        if(value > m){
        return;
        }
        if(value >= n && value <= m){
            ans.push_back(value);
        }
        
        int back = value%10;
        
        if(back != 0){
            explore(value*10+(back-1), n, m, ans);
        }
        
        if(back != 9){
            explore(value*10 + (back+1), n, m, ans);
        }
    }
    int steppingNumbers(int n, int m)
    {
        vector<int>ans;
        if(n == 0){
            ans.push_back(0);
        }
       
        for(int i=1; i<=9; i++){
            explore(i, n, m, ans);
        }
        
        sort(ans.begin(), ans.end());
        return ans.size();
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends