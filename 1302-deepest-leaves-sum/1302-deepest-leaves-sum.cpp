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
    void findHeight(TreeNode* root, int height, int &maxHeight){
        if(!root)               return;
        
        maxHeight = max(height, maxHeight);
        findHeight(root->left, height+1, maxHeight);
        findHeight(root->right, height+1, maxHeight);
    }

    void solve(TreeNode* root, int &sum, int &maxHeight, int height){
        if(!root)               return;

        if(height == maxHeight){
            sum += root->val;
        }

        solve(root->left, sum, maxHeight, height+1);
        solve(root->right, sum, maxHeight, height+1);
    }

public:
    int deepestLeavesSum(TreeNode* root) {
        int height = 0, maxHeight = 0;
        int sum = 0;
        findHeight(root, height, maxHeight);
        solve(root, sum, maxHeight, 0);
        return sum;
    }
};