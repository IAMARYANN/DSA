class Solution {
public:
    int Check(vector<int> nums2,int k,vector<int>v){
         for(int i=0;i<nums2.size();i++){
            if(nums2[i]==k){
                return v[i];
            }
         }
         return 0;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        vector<int>k;
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.size()==0){
                 v.push_back(-1);
            }
            else if(s.size()>0 && s.top()>nums2[i]){
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()<=nums2[i]){
                while(s.size()>0 && s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(nums2[i]);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<nums1.size();i++){
            int ans=Check(nums2,nums1[i],v);
            k.push_back(ans);
        }
        return k;
    }
};