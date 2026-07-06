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
 bool func( TreeNode*root, int min_val , int max_val){
    if(!root) return true;
   
    if(root->val<=min_val || root->val>=max_val ) return false;
    return func( root->left , min_val, root->val) && func( root->right , root->val, max_val);

 }
    bool isValidBST(TreeNode* root) {
         return   func( root, INT_MIN , INT_MAX);
        
    }
};
