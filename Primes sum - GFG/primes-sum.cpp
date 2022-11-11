//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    bool isPrime(int N){
        for(int i=2; i*i<=N; i++){
            if(N%i == 0){
                return false;
            }
        }
        return true;
    }
    string isSumOfTwo(int N){
        vector<int>v;
        for(int i=1; i<N; i++){
            if(isPrime(i)){
                v.push_back(i);
            }
        }
        
        int i=0;
        int j=v.size()-1;
        sort(v.begin(), v.end());
        
        while(i<j){
            if(v[i] + v[j] == N){
                return "Yes";
            }else if(v[i] + v[j] < N){
                i++;
            }else if(v[i] + v[j] > N){
                j--;
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends