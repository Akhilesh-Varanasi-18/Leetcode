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
            cnt++;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                q.pop();
                l.push_back(node->val);
                if(cnt%2!=0){
                    if(node->right != NULL)q.push(node->right);
                    if(node->left != NULL)q.push(node->left);
                }
                else{
                    if(node->left != NULL)q.push(node->left);
                    if(node->right != NULL)q.push(node->right);
                }
            }
            res.push_back(l);
        } 
        return res;
    }
};