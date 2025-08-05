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
    int m(TreeNode* node,int &maxy){
        if(node == NULL)return 0;
        int lh=m(node->left,maxy);
        int rh=m(node->right,maxy);
        maxy=max(maxy,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        int maxy=INT_MIN;
        m(root,maxy);
        return maxy;   
    }
};