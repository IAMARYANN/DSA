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
    void levelorder(TreeNode* root,vector<vector<int>> &ans){
        if(root == NULL)return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>tem;
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                tem.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            ans.push_back(tem);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        levelorder(root,ans);
        int n =ans.size();
        vector<int>final(n);
        if(n!=0){
           for(int i=0;i<n;i++){
            int m = ans[i].size();
            final[i]=ans[i][m-1];
            } 
        }
        return final;
    }
};