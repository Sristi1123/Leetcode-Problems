class Solution {
public:

    TreeNode* helper(int preStart, int preEnd, vector<int>& preorder, int inStart, int inEnd, vector<int>& inorder) {
        if (preStart>preEnd || inStart>inEnd)
            return NULL;

        TreeNode* root=new TreeNode(preorder[preStart]);

        int count=inStart;
        while (inorder[count]!=preorder[preStart])
            count++;

        int leftSize = count - inStart;
        root->left = helper(preStart + 1, preStart + leftSize, preorder, inStart, count - 1, inorder);
        root->right = helper(preStart + leftSize + 1, preEnd, preorder, count + 1, inEnd, inorder);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(0, preorder.size() - 1,preorder, 0, inorder.size() - 1,inorder);
    }
};