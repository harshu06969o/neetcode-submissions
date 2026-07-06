class Solution {	
public:
     int  func( TreeNode* root , int &maxi){
        if(!root) return 0;
        int lh = max(0, func(root->left, maxi));
        int rh = max( 0, func( root->right,maxi));
        maxi = max( maxi , root->val + lh + rh);
        return max(lh , rh ) + root->val;
     }
    int maxPathSum(TreeNode* root) {
        int  maxi = INT_MIN;
        func(root , maxi);
        return maxi;
        //your code goes here
    }
};	