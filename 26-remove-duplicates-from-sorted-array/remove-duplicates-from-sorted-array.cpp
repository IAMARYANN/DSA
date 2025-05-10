class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int final=0;
        int swaping=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[final]){
                swap(nums[i],nums[swaping]);
                final=swaping;
                swaping++;
            }
        }
        nums.erase(nums.begin()+swaping,nums.end());
        return swaping;
    }
};