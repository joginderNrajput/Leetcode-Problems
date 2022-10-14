//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends

#include<map>
class Solution{
    public:
    int maximizeSum(int arr[], int n) 
    {
        int max = arr[0];
        for(int i=0; i<n; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        unordered_map<int, int>map(max+1);
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        int sum = 0;
        for(int i=n-1; i>=0; i--){
            int key = arr[i];
            if(map[key] > 0){
                sum += arr[i];
                map[key]--;
                map[key-1]--;
            }
        }
        return sum;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends