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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)               return ans;

        queue<TreeNode* > q;
        q.push(root);
        bool r2l = false;

        while(!q.empty()){
            int sz = q.size();
            vector<int> temp;

            for(int i=0; i<sz; i++){
                auto fr = q.front();
                q.pop();

                temp.push_back(fr->val);

                if(fr->left)                q.push(fr->left);
                if(fr->right)               q.push(fr->right);
            }

            if(r2l)             reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            r2l = !r2l;
        }

        return ans;
    }
};