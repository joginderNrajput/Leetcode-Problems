class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long int total=0;
	    long long int sum=0;
        int n=arr.size();
	    int i=0;
     
	while(i<n)	total+=arr[i++];
        
	if(total%3!=0)
        return false;
	int j=0;
	while(j<n-2)
	{
        sum+=arr[j++];
        if(sum==total/3)
            break;
	}
	if(sum!=total/3)
        return false;

        
     sum=0;
	while(j<n-1)
	{
        sum+=arr[j++];
       if(sum==total/3)
           break;
	}

	return sum==total/3;

  
    
    }
	
    
};