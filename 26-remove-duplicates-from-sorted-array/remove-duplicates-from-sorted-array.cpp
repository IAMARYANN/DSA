class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int check=nums[0];
        int count=1;
        int unique=1;
        int n=nums.size()-1;
        for(int i=1;i<=n;){
            if(check==nums[i]){
                i++;
            }
            else if(check != nums[i]){
                unique++;
                nums[count]=nums[i];
                count++;
                check=nums[i];
                i++;
            }
        }
        nums.erase(nums.begin() + (count + 1), nums.end());
        return unique;
    }
};