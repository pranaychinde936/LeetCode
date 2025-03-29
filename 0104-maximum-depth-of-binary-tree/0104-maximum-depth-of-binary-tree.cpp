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
    int maxDepth(TreeNode* root) {
        if(!root)           return 0;
        int ans = 0;

        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});

        while(!q.empty()){
            auto fr = q.front();
            q.pop();
            TreeNode* node = fr.first;
            int dep = fr.second;
            ans = max(ans, dep);

            if(node->left)          q.push({node->left, dep+1});
            if(node->right)         q.push({node->right, dep+1});
        }

        return ans;
    }
};