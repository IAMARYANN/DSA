class Solution {
public:
vector<int> pivotArray(vector<int>& nums, int pivot) {
    int n = nums.size();
    vector<int> temp(nums);  // Copy of original array
    int low = 0;

    // First pass: Move elements < pivot to the beginning
    for (int num : temp) {
        if (num < pivot) nums[low++] = num;
    }

    // Second pass: Move elements == pivot to the middle
    for (int num : temp) {
        if (num == pivot) nums[low++] = num;
    }

    // Third pass: Move elements > pivot to the end
    for (int num : temp) {
        if (num > pivot) nums[low++] = num;
    }
    return nums;
}

};