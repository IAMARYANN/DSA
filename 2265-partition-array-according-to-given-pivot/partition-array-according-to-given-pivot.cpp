class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>low;
        vector<int>equal;
        vector<int>high;
        vector<int>ans;
        vector<int>result;
       for( int x : nums ){
            if(x<pivot){
                low.push_back(x);
            }
            else if(x>pivot){
                high.push_back(x);
            }
            else{
                equal.push_back(x);
            }
       }
       low.insert(low.end(),equal.begin(),equal.end());
       low.insert(low.end(),high.begin(),high.end());
       return low;
    }
};