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
    void inorder(TreeNode* root, vector<int> &in){
        if(!root)               return;

        inorder(root->left, in);
        in.push_back(root->val);
        inorder(root->right, in);
    }
    void solve(TreeNode *root, vector<int> &prefix, int &i){
        if(!root)           return;

        solve(root->left, prefix, i);
        root->val = prefix[i];
        i++;
        solve(root->right, prefix, i);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        if(!root)            return root;
        vector<int> in;
        inorder(root, in);
        vector<int> prefixSum = in;
        for(int i=prefixSum.size()-2; i>=0; i--){
            prefixSum[i] = prefixSum[i] + prefixSum[i+1];
        }
        int i = 0;
        solve(root, prefixSum, i);
        return root;
    }
};