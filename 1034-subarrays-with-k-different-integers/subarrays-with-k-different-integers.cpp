class Solution {
public:
    int ansK(vector<int>nums,int k){
        unordered_map<int, int> mp;
        int n = nums.size();
        int l = 0, count = 0;
        
        for (int r = 0; r < n; r++) {
            mp[nums[r]]++;
            
            while (mp.size() > k) {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }
                l++;
            }
            
            count += (r - l + 1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans1 = ansK(nums,k);
        int ans2 = ansK(nums,k-1);
        return (ans1-ans2);
    }
};