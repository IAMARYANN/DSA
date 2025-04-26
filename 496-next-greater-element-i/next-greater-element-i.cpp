class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ele;
        vector<int>ans;
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.size()==0){
                ele[nums2[i]]=-1;
            }
            else if(s.size()>0 && nums2[i]<s.top()){
                ele[nums2[i]]=s.top();
            }
            else if(s.size()>0 && nums2[i]>=s.top()){
                while(s.size()>0 && nums2[i]>=s.top()){
                    s.pop();
                }
                if(s.size()==0){
                    ele[nums2[i]]=-1;
                }
                else{
                    ele[nums2[i]]=s.top();
                }
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            auto it = ele.find(nums1[i]);
            if(it != ele.end()){
                nums1[i]=it->second;
            }
        }
        return nums1;
    }
};