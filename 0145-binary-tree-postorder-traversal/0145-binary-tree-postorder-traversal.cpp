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
    void po(TreeNode* n, vector<int>&res){
        if(n==NULL)return;
        po(n->left,res);
        po(n->right,res);
        res.push_back(n->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        po(root,res);
        return(res);
    }
};