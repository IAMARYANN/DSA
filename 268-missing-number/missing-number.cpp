class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for (int i = 0; i < n+1; i++) {
        freq[i] = 0;
    }
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto &p : freq ){
            if(p.second ==0  ){
                return p.first;
            }
        }
        return 0;
    }
};