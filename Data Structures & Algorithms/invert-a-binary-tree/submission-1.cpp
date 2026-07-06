class Solution {
public:
    void func(TreeNode* root) {
        if (!root) return;

        swap(root->left, root->right);

        func(root->left);
        func(root->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        func(root);
        return root;
    }
};