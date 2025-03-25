class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for( auto &p : freq ){
            if(p.second > 1){
                return true;
            }
        }
        return false;
    }
};