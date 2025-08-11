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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);
        TreeNode* ans = root;
        TreeNode* adder = new TreeNode(val);

        while(root){
            if(val < root->val){
                if(!root->left){
                 root->left= adder;
                 break;
               } root = root->left;
            }
            else if(val > root->val ){
               if(!root->right){
                 root->right = adder;
                 break;
               }
               root = root->right;
            }
        }
        return ans;
    }
};