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
    void levelorder(TreeNode* root, vector<tuple<int, int, int>>& nodes) {
        if (!root) return;
        queue<tuple<TreeNode*, int, int>> q; 
        q.push({root, 0, 0});

        while (!q.empty()) {
            auto [node, row, col] = q.front();
            q.pop();
            nodes.push_back({col, row, node->val});

            if (node->left) q.push({node->left, row + 1, col - 1});
            if (node->right) q.push({node->right, row + 1, col + 1});
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int, int, int>> nodes;
        levelorder(root, nodes);
        sort(nodes.begin(), nodes.end());

        vector<vector<int>> ans;
        int prev_col = INT_MIN;

        int n = nodes.size();
        int i = 0;

            while (i < n) {
                vector<int> temp;
                int col = get<0>(nodes[i]);
                while (i < n && get<0>(nodes[i]) == col) {
                    temp.push_back(get<2>(nodes[i]));
                    i++;
                }
                ans.push_back(temp);
                }
        return ans;
    }
};
