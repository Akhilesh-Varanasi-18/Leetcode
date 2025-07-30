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
    void io(TreeNode* n, vector<int>&res){
        if(n==NULL)return;
        io(n->left,res);
        res.push_back(n->val);
        io(n->right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>r;
        io(root,r);
        return r;
    }
};