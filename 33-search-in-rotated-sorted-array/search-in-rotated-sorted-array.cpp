class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int m=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                m=i;
                break;
            }
        }
        int temp=m;
        while(s<=m){
            int mid = m + (s-m)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                m=m-1;
            }
            else{
                s=s+1;
            }
        }
         while(temp<=e){
            int mid = e + (temp-e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e=e-1;
            }
            else{
                temp=temp+1;
            }
        }
        return -1;
    }
};