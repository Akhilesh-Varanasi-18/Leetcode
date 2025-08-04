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
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>po;
       if(root == NULL)return po;
       stack<TreeNode*>s;
       s.push(root);
       while(!s.empty()){
        TreeNode* n=s.top();
        s.pop();
        po.push_back(n->val);
        if(n->right != NULL)s.push(n->right);
        if(n->left != NULL)s.push(n->left);
       } 
       return po;
    }
};