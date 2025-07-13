class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // Step 1: Sort the array
        long long left = 0, total = 0, res = 0;

        for (int right = 0; right < nums.size(); right++) {
            total += nums[right]; // Step 2: Expand the window by including nums[right]

            // Step 3: Check if current window is valid
            while ((right - left + 1LL) * nums[right] - total > k) {
                total -= nums[left]; // shrink window
                left++;
            }

            // Step 4: Update result with max window size
            res = max(res, right - left + 1);
        }

        return res;
    }
};