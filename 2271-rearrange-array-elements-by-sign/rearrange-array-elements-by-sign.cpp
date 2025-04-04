class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>posi;
        vector<int>negi;

        for(int x : nums ){
            if(x<0){
                negi.push_back(x);
            }
            else{
                posi.push_back(x);
            }
        }
        int p=0;
        int ne=0;
        nums.clear();
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums.push_back(posi[p]);
                p++;
            }
            else{
                nums.push_back(negi[ne]);
                ne++;
            }
        }
        return nums;
    }
};