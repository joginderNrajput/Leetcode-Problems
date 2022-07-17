class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m;
        int i=0; 
        while(k<m+n && i<n){
        nums1[k++] = nums2[i++];
    }
        int s = m+n;
        sort(nums1.begin(), nums1.end());
        
    }
};