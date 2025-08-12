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
    TreeNode* buildBST(vector<int>& preorder, int& i, int minVal, int maxVal) {
    if (i >= preorder.size()) return NULL;
    int val = preorder[i];
    if (val < minVal || val > maxVal) return NULL;

    TreeNode* root = new TreeNode(val);
    i++;
    root->left = buildBST(preorder, i, minVal, val - 1);
    root->right = buildBST(preorder, i, val + 1, maxVal);
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        TreeNode* root = buildBST(preorder, i, INT_MIN, INT_MAX);
        return root;
    }
};