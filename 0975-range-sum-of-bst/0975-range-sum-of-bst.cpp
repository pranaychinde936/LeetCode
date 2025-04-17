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
    void inorder(TreeNode* root, int &ans, int &low, int &high){
        if(!root)           return;

        inorder(root->left, ans, low, high);
        if(root->val >= low && root->val <= high)           ans = ans + root->val;
        inorder(root->right, ans, low, high);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        inorder(root, ans, low, high);
        return ans;
    }
};