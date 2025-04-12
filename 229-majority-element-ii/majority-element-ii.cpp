class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans=n/3;
        vector<int>arr;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto&x :freq){
            if(x.second>ans){
                arr.push_back(x.first);
            }
        }
        return arr;
    }
};