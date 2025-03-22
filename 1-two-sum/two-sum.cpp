class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size()-1;
        vector<int>arr;
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int sum = nums[i]+nums[j];
                if(sum == target){
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;
                }
            }
        }
        return arr;
    }
};