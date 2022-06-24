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
    void inOrder(TreeNode* root, vector<int> &in){
        if(root == NULL){
            return;
        }
        inOrder(root->left, in);
        in.push_back(root -> val);
        inOrder(root->right, in);
    }
    
    TreeNode* inOrderToBST(int s, int e, vector<int> &inOrderTraversal){
    if(s>e){
        return NULL;
    }
    
    int mid = (s+e)/2;
    TreeNode* root = new TreeNode(inOrderTraversal[mid]);
    root -> left = inOrderToBST(s, mid-1, inOrderTraversal);
    root -> right = inOrderToBST(mid+1, e, inOrderTraversal);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>inOrderTraversal;
    inOrder(root, inOrderTraversal);
    return inOrderToBST(0, inOrderTraversal.size()-1, inOrderTraversal);
    }
};