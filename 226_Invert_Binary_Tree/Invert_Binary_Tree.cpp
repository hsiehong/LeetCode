class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return NULL;

        if (!root->left && !root->right)
            return root;

        struct TreeNode *tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
