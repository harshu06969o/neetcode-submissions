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
    int func( TreeNode* root, int maxi, int cnt){
         if(!root) return 0;
         if( root->val >= maxi) return 1+ func( root->left, root->val , cnt)+func( root->right, root->val, cnt);
         
         else return func( root->left , maxi, cnt)+ func( root->right , maxi ,  cnt);
          

        
     }
    int goodNodes(TreeNode* root) {
         if(!root) return 0;
        int maxi = root->val;
         int cnt =1;
        return func( root, INT_MIN,cnt);
        
    }
};
