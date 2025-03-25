class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int out=0;
        for( int i=0;i<n;i++){
            if(nums[i] == 0 ){
                continue;
            }
            else{
                swap(nums[out],nums[i]);
                out++;
            }
        }
    }
};