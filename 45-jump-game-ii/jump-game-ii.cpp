class Solution {
public:
    int jump(vector<int>& nums) {
        int furt = 0;
        int current = 0;
        int jump=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            furt = max(furt , i + nums[i]);
            if( i == current ){
                jump++;
                current = furt;
                if (current >= n - 1) break;
            }
        }
        return jump;
    }
};