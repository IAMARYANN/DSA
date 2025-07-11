class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65&& s[i]<=90){
                st.push_back(s[i]+32);
            }
            else if(s[i]>=97 && s[i]<=122){
                st.push_back(s[i]);
            }
            else if(s[i]>=48 && s[i]<=57){
                st.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        int i=0;
        int e=st.size()-1;
        while(i<=e){
            if(st[i]!=st[e])return false;
            i++;
            e--;
        }
        return true;
    }
};