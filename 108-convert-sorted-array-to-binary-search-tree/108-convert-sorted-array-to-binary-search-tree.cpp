/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int mid = n/2;
        if(n == 0){
            return NULL;
        }
        
         
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> left = vector<int>(nums.begin(), nums.begin()+mid);
        vector<int> right = vector<int>(nums.begin()+mid+1, nums.end());
        root -> left = sortedArrayToBST(left);
        root -> right = sortedArrayToBST(right);
        return root;
    }
};