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
    int maxLevelSum(TreeNode* root) {
        int maxi = INT_MIN;
        int ans = 1;
        int level = 0;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();
            level++;

            int sm = 0;
            for(int i=0; i<sz; i++){
                TreeNode* fr = q.front();
                q.pop();

                sm = sm + fr->val;
                if(fr->left)            q.push(fr->left);
                if(fr->right)            q.push(fr->right);
            }

            if(sm > maxi){
                maxi = sm;
                ans = level;
            }
        }
        
        return ans;
    }
};