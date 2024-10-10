class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        if (strs.empty()) return "";  
        if (strs.size() == 1) return strs[0]; 
            string ans;
   
    for (int j = 0; j < strs[0].size() && j < strs[1].size(); j++)
    {
        if (strs[0][j] == strs[1][j]) 
        {
            ans += strs[0][j];
        } 
        else 
        {
            break;  
        }
    }

   
    for (int i = 2; i < strs.size(); i++) 
    {
        int p = 0;
        while (p < ans.size() && p < strs[i].size() && ans[p] == strs[i][p]) 
        {
            p++;  
        }
        ans.erase(ans.begin() + p, ans.end()); 

        if (ans.empty()) return "";  
    }

    return ans;
    }
};