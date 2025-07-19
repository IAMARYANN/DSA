class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int size=0;
        int maxi=0;
        unordered_map<char,int>mpp;
        int n=s.length();
        int i=0;
        int j=0;
        while(r<n){
            if(mpp.size()== 0 || mpp.find(s[r]) == mpp.end()){
                cout<<s[r]<<" - 1st "<<endl;
                mpp.insert({s[r],i});
                i++;
                size++;
                maxi=max(size,maxi);
            }
            else if(mpp.find(s[r]) != mpp.end()){
                auto it =mpp.find(s[r]);
                int a=it->second;
                while(j<=a){
                    mpp.erase(s[j]);
                    j++;
                    size--;
                }
                mpp.insert({s[r],i});
                i++;
                size++;
                maxi=max(size,maxi);
            }
            r++;
        }
        return maxi;
    }
};