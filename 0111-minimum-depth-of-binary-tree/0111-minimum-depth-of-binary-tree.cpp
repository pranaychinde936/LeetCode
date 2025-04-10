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
private:
    void dfs(TreeNode* root, int &mini, int height){
        if(!root)           return;
        if(root->left == NULL && root->right == NULL){
            mini = min(mini, height);
            return;
        }

        if(root->left)          dfs(root->left, mini, height+1);
        if(root->right)         dfs(root->right, mini, height+1);
    }
public:
    int minDepth(TreeNode* root) {
        if(!root)           return 0;

        int mini = 1e9;
        dfs(root, mini, 1);

        return mini;
    }
};