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
    void preorder(TreeNode* root, vector<int> &ans){
        if(root==NULL) return;
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL) return 0;
        vector<int> ans;
        preorder(root,ans);
        vector<int> res;
        int n=ans.size();
        for(int i=0;i<n-1;i++){
            int diff=INT_MAX;
            for(int j=i+1;j<n;j++){
                diff=min(diff,abs(ans[j]-ans[i]));
            }
            res.push_back(diff);
        }
        sort(res.begin(),res.end());
        return res[0];
    }
};