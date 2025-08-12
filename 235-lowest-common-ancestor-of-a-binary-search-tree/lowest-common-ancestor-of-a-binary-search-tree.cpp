/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int LCA(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode* &ans){
        if(root == NULL){
            return 0;
        }
        int left = LCA(root->left, p, q, ans);
        int right = LCA(root->right, p, q, ans);
        int mid = (root == p || root == q) ? 1 : 0;
        if (left + right + mid >= 2) {
            ans = root;
        }
        return (left + right + mid > 0) ? 1 : 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = NULL;
        LCA ( root , p , q , ans);
        return ans;
    }
};