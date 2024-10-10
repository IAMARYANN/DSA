class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int>ans1;
        unordered_map<char,int>ans2;
        for(int i=0;i<s.size();i++)
        {
                ans1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            ans2[t[i]]++;
        }
        if(ans1==ans2)return true;
        return false;
    }
};