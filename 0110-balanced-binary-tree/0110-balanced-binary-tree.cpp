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
    int maxy(TreeNode* node){
        if(node == NULL)return 0;
        int lh=maxy(node->left);
        int rh=maxy(node->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        TreeNode* n=root;
        int l=maxy(n->left);
        int r=maxy(n->right);
        if(abs(l-r)>1)return false;
        bool lefty=isBalanced(n->left);
        bool righty=isBalanced(n->right);
        if(!lefty || !righty)return false;
        return true;
        
    }
};