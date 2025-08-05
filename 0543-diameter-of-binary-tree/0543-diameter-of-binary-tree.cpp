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
    int m(TreeNode* node){
        if(node == NULL)return 0;
        int lh=m(node->left);
        int rh=m(node->right);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        int maxy=INT_MIN;
        int l=m(root->left);
        int r=m(root->right);
        int k=l+r;
        maxy=max(maxy,k);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxy;   
    }
};