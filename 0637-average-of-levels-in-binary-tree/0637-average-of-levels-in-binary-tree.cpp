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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            double sum = 0;
            int n = 0;
            for(int i=0; i<sz; i++){
                auto frNode = q.front();
                q.pop();
                sum += frNode->val;
                n++;
                if(frNode->left)            q.push(frNode->left);
                if(frNode->right)            q.push(frNode->right);
            }
            ans.push_back(sum/n);
        }

        return ans;
    }
};