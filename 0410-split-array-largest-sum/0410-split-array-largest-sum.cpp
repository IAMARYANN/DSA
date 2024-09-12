class Solution {
public:
int is_possible(vector<int>& nums,int mid)
{
    int cnt=1;
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        if(sum+nums[i]<=mid)
        {
            sum+=nums[i];
        }
        else
        {
            cnt++;
            sum=nums[i];
        }
    }
    return cnt;
}
    int splitArray(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if(k>n)return -1;
        int low=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int high=sum;
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            ans=is_possible(nums,mid);
            if(ans>k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return high+1;
    }
};