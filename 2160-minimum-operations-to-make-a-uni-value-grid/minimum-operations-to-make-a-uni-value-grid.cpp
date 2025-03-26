class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
       vector<int> arr;
    int m = grid.size(), n = grid[0].size();

    // Convert grid to 1D array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr.push_back(grid[i][j]);
        }
    }

    // Sort array and find median
    sort(arr.begin(), arr.end());
    int median = arr[arr.size() / 2];

    // Check if transformation is possible
    long long operations = 0;
    for (int num : arr) {
        if ((num - median) % x != 0) return -1;  // If transformation is not possible
        operations += abs(num - median) / x;
    }

    return operations;
    }
};