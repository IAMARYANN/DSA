class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>freq1;
        unordered_map<int,int>freq2;
        for(int i=0;i<nums1.size();i++){
            freq1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            freq2[nums2[i]]++;
        }
        vector<int>ans;
        for (auto &p : freq1) {  
        int num = p.first;  
        if (freq2.find(num) != freq2.end()) {  // Check if num exists in freq2
            int commonFreq = min(p.second, freq2[num]);  
            while (commonFreq--) {
                ans.push_back(num);
            }
        }
    }
        return ans;
        
    }
};