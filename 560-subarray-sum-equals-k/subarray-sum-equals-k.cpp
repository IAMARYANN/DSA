class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int pre_sum=0;
        map<int,int>freq;
        freq[0]=1;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            int remove=pre_sum-k;
            cnt=cnt+freq[remove];
            freq[pre_sum]+=1;
        }
        return cnt;

    }
};