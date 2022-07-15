// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        sort(arr, arr+n);
        long long int first = 0;
        long long int second = 0;
        int i=0;
        int j=1;
        while(i<n || j<n){
            if(i<n){
                first = first*10 + arr[i];
                i = i+2;
            }
            if(j<n){
                second = second*10 + arr[j];
                j = j+2;
            }
            
            
            
        }
        return first + second;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends