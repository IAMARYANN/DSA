class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>ans;
        for( int x : nums){
            if(x==0)count++;
        }
        for(int x : nums){
            if(x!=0)ans.push_back(x);
        }
        for(int i=0;i<count;i++){
            ans.push_back(0);
        }
        nums=ans;
    }
};