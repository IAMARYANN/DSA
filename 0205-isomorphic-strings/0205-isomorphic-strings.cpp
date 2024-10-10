class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s.size()!=t.size())return false;
        unordered_map<char,char>ans;
        unordered_map<char,char>y;
        for(int i=0;i<s.size();i++)
        {
            if(ans.find(s[i])==ans.end() && y.find(t[i])==y.end())
            {
                            ans[s[i]]=t[i];
                              y[t[i]]=s[i];
            }

            else if(ans[s[i]]!=t[i] && y[t[i]]!=s[i])return false;
                
        }
        return true;
    }
};