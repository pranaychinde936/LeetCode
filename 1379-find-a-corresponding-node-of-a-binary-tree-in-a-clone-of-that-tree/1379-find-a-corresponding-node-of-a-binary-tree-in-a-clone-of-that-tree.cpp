/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    void dfs(TreeNode* root, int &tar, TreeNode* &ans){
        if(!root)               return;
        if(root->val == tar){
            ans = root;
            return;
        }

        dfs(root->left, tar, ans);
        dfs(root->right, tar, ans);

        return;
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int tar = target->val;
        TreeNode* ans = NULL;
        dfs(cloned, tar, ans);

        return ans;
    }
};