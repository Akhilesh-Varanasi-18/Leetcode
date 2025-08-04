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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>po;
        if(root == NULL)return po;
        stack<TreeNode*>s1,s2;
        s1.push(root);
        while(!s1.empty()){
            TreeNode* node=s1.top();
            s1.pop();
            s2.push(node);
            if(node->left != NULL)s1.push(node->left);
            if(node->right != NULL)s1.push(node->right);
        }
        int s=s2.size();
        for(int i=0;i<s;i++){
            TreeNode* n=s2.top();
            s2.pop();
            po.push_back(n->val);
        }
        return po;
    }
};