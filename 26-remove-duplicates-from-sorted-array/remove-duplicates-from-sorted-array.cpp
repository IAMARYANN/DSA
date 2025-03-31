class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
       int final_index=0;
       int swaping_index=1;
       for(int i=1;i<n;i++){
          if(nums[i]>nums[final_index]){
             nums[swaping_index]=nums[i];
             swaping_index++;
             final_index=i;
          }
       }
       nums.erase(nums.begin()+swaping_index,nums.end());
       return swaping_index;
    }
};