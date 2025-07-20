class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;int r=0;
        int n=nums.size();
        int maxl=0;
        int zeroes=0;
        while(r<n){
            if(nums[r]==0 && zeroes<=k){
                zeroes++;
            }
                while(zeroes>k){
                    if(nums[l]==0){
                        zeroes--;
                    }
                    l++;
            }
            int length = r-l+1;
            maxl = max(maxl,length);
            r++;
        }
        return maxl;
    }
};