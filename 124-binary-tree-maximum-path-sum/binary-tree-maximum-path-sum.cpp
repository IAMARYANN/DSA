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
      int maxSum = INT_MIN;  

    int sumu(TreeNode* root) {
        if (root == NULL) return 0;

       
        int left = max(0, sumu(root->left));   
        int right = max(0, sumu(root->right)); 

        int throughRoot = left + root->val + right;

        maxSum = max(maxSum, throughRoot);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        sumu(root);  
        return maxSum;
    }
};