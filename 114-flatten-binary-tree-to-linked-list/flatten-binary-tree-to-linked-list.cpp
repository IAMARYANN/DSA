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
    void flat(TreeNode* root, TreeNode*& ans) {
    if (!root) return;

    TreeNode* leftSaved = root->left;
    TreeNode* rightSaved = root->right;

    ans->right = root;
    root->left = NULL;
    ans = root;

    flat(leftSaved, ans);
    flat(rightSaved, ans);
}
void flatten(TreeNode* root) {
    TreeNode dummy(0);
    TreeNode* ans = &dummy;
    flat(root, ans);
    
}

};