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
    void inorder(TreeNode* root, vector<int> &ans){
        if(!root)           return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans, list1, list2;

        inorder(root1, list1);
        inorder(root2, list2);

        int i = 0, j = 0, m = list1.size(), n = list2.size();

        while(i<m && j<n){
            if(list1[i] < list2[j]){
                ans.push_back(list1[i]);
                i++;
            }
            else if(list1[i] > list2[j]){
                ans.push_back(list2[j]);
                j++;
            }
            else{
                ans.push_back(list1[i]);
                ans.push_back(list1[i]);
                i++; j++;
            }
        }

        while(i<m){
            ans.push_back(list1[i]);
            i++;
        }

        while(j<n){
            ans.push_back(list2[j]);
            j++;
        }

        return ans;
    }
};