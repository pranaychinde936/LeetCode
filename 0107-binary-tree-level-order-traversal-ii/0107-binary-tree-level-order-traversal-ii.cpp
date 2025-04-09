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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)               return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> temp;
            int sz = q.size();
            for(int i=0; i<sz; i++){
                auto frNode = q.front();
                q.pop();
                temp.push_back(frNode->val);
                if(frNode->left)            q.push(frNode->left);
                if(frNode->right)           q.push(frNode->right);
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};