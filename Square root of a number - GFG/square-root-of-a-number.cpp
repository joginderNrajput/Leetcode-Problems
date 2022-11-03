//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
      long long int solve(long long int n){
          long long int s = 0;
          long long int e = n-1;
          long long mid = (s+e)/2;
          long long ans = 0;
          if(n == 1){
              return 1;
          }
          
          while(s <= e){
            long long square = mid*mid;
              if(square == n){
                  return mid;
              }
              
              if(square < n){
                  ans = mid;
                  s = mid+1;
              }
              
              if(square > n){
                  e = mid-1;
              }
              mid = (s+e)/2;
          }
          return mid;
      }
    long long int floorSqrt(long long int x) 
    {
        long long int ans = sqrt(x);
        return ans;
        // return solve(x);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends