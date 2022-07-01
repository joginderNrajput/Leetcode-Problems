// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        string res = "";
        for(int i = 0;i < arr[0].length();i++){
            for(int j = 0;j < N;j++){
                if(arr[0][i] != arr[j][i]){
                    if(res == "")
                        return "-1";
                    else
                        return res;
                }
            }
            res += arr[0][i];
        }
        return arr[0];
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends