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
    void levelorder(TreeNode* p,vector<int>&ans){
        if(p == NULL) return;
        queue<TreeNode*>pt;
        pt.push(p);
        while(!pt.empty()){
            int size = pt.size();
            for(int i=0;i<size;i++){
                TreeNode* temp1 = pt.front();
                pt.pop();
                ans.push_back(temp1->val);
                if (temp1->left) pt.push(temp1->left);
                else ans.push_back(-2);
                if (temp1->right) pt.push(temp1->right);
                else ans.push_back(-1);
            }   
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q){
        vector<int>ans1;
        vector<int>ans2;
        levelorder(p,ans1);
        levelorder(q,ans2);
        int n=ans1.size();
        int m=ans2.size();
        int i=0;
        while(n>0 && m>0){
            if(ans1[i] != ans2[i])return false;
            cout<<"ans1 "<<ans1[i]<<endl;
            cout<<"ans2 "<<ans2[i]<<endl;
            i++;
            n--;
            m--;
        }
        if(n!=0){
            return false;
        }
        if(m!=0){
            return false;
        }
        return true;
    }
};