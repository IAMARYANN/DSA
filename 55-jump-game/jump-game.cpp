class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(maxi < i)return false;
            int a = i+nums[i];
            maxi=max(a,maxi);
        }
        return true;
    }
};