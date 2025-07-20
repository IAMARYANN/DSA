class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0, odd = 0, count = 0, temp = 0;

    while (r < n) {
        if (nums[r] % 2 != 0) { 
            odd++;
            temp = 0;
        }
        while (odd == k) {
            temp++; 
            if (nums[l] % 2 != 0) odd--;
            l++;
        }
        count += temp;
        r++;
    }   
    return count;
}         
};