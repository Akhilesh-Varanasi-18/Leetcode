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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root == NULL)return res;
        int cnt=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>l;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();
                l.push_back(node->val);
                if(node->left != NULL)q.push(node->left);
                if(node->right != NULL)q.push(node->right);
            }
            if(cnt&1) reverse(l.begin(),l.end());
            res.push_back(l);
            cnt++;
        } 
        return res;
    }
};