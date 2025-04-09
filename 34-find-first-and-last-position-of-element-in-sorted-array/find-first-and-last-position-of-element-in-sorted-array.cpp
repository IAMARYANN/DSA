class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n =nums.size();
        vector<int>ans;
        int ans1=-1;
        int ans2=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                ans2=i;
                break;
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};