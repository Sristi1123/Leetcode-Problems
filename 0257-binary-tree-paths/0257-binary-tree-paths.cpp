class Solution {
public:
    vector<string> ans;

    void dfs(TreeNode* root, string path) {
        if (root == NULL)
            return;

        // Add current node to path
        path += to_string(root->val);

        // If it is a leaf node, store the path
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        // Add arrow before going to children
        path += "->";

        dfs(root->left, path);
        dfs(root->right, path);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
};