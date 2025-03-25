class Solution {
public:
   bool check(vector<int>&ans,int k){
    int n=ans.size();
    for(int i=1;i<n;i++){
        if(ans[i]==0 && ans[0]==0){
            return false;
        }
    }
    return true;
   }
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1 && k==n)return 1;
        int count=0;
        vector<int>ans(k+1,0);
        for(int i=n-1;i>=0;i--){
            bool value = check(ans,k);
            if(value == false){
                count++;
                int a=nums[i];
                if(a<=k && a>0){
                    ans[a]++;
                    cout<<ans[a]<<endl;
                }
                cout<<nums[i]<<endl;
            }
        }
       return count;
    }
};