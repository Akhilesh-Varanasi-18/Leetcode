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
    void po(TreeNode* n, vector<int>& res){
        if(n == NULL){
            res.push_back(INT_MAX);
            return;
        }
        else res.push_back(n->val);
        po(n->left,res);
        po(n->right,res);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>r1,r2;
        po(p,r1);
        po(q,r2);
        if(r1==r2)return true;
        else return false;
    }
};