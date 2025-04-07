class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};