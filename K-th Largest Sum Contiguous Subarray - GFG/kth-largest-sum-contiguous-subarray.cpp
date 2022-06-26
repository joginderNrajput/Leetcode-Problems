// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
#include<queue>
class Solution{
public:
    int kthLargest(vector<int> &arr,int N,int K){
        
        priority_queue <int, vector<int>, greater<int> > mini;
        for(int i=0; i<arr.size(); i++){
            int sum = 0;
            for(int j=i; j<arr.size();j++){
                sum = sum+arr[j];
                if(mini.size() < K){
                    mini.push(sum);
                }else{
                    if(sum > mini.top()){
                        mini.pop();
                        mini.push(sum);
                    }
                }
            }
        }
        return mini.top();
    }
};

// { Driver Code Starts.

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N;
        cin>>K;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        int ans=ob.kthLargest(Arr,N,K);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends