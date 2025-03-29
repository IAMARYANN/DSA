class Solution {
public:
   vector<int> pivotArray(vector<int>& nums, int pivot) {
    int low = 0, equal = 0, high = 0;

    // First pass: Count the number of elements in each category
    for (int num : nums) {
        if (num < pivot) low++;
        else if (num == pivot) equal++;
        else high++;
    }

    // Create a new array and place elements based on the count
    vector<int> result(nums.size());
    int i = 0, j = low, k = low + equal;

    // Second pass: Place elements in correct order
    for (int num : nums) {
        if (num < pivot) result[i++] = num;
        else if (num == pivot) result[j++] = num;
        else result[k++] = num;
    }

    return result;
}
};