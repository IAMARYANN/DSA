class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
       int final_index=0;
       int swaping_index=1;
       for(int i=1;i<n;i++){
          if(nums[i]>nums[final_index]){
            swap(nums[i],nums[swaping_index]);
             final_index=swaping_index;
             swaping_index++;
          }
       }
       nums.erase(nums.begin()+swaping_index,nums.end());
       return swaping_index;
    }
};