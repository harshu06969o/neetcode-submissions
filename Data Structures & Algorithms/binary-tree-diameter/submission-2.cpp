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
int maxh( TreeNode* root){
        if(!root) return 0;
        return 1+ max( maxh( root->left), maxh( root->right));

     }
    int func( TreeNode* root, int&  maxi){
         if(!root) return 0;
         int lh =  func( root->left , maxi);
         int rh = func( root->right , maxi);
         maxi = max( maxi , lh+rh);
         return 1+ max( func( root->left , maxi),  func( root->right , maxi));
          
         

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
         func( root, maxi);
         return maxi;

        
    }
};
