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
class FindElements {
private:
    TreeNode* root;

    void traverse(TreeNode* &root, int parent){
        if(!root)           return;

        if(root->left){
            root->left->val = (2 * parent) + 1;
            traverse(root->left, root->left->val);
        }

        if(root->right){
            root->right->val = (2 * parent) + 2;
            traverse(root->right, root->right->val);
        }
    }

    void printBinTree(TreeNode* root){
        if(!root)           return;

        printBinTree(root->left);
        cout<< root->val<< " ";
        printBinTree(root->right);
    }

    bool isPresent(TreeNode* root, int& target){
        if(!root)           return false;

        if(root->val == target)               return true;
        bool isPresentInLeft = isPresent(root->left, target);
        bool isPresentInRight = isPresent(root->right, target);

        return (isPresentInLeft || isPresentInRight);
    }
public:
    FindElements(TreeNode* rt) {
        root = rt;
        root->val = 0;
        traverse(root, 0);
        // printBinTree(root);
    }
    
    bool find(int target) {
        return isPresent(root, target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */