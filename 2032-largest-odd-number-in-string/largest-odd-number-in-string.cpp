class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int chari = num[i] - '0';
            cout<<chari;
            ans.push_back(chari);
        }
        reverse(ans.begin(),ans.end());
        for(int i=n-1;i>=0;i--){
            if((num[i] - '0') %2 != 0){
                string part = num.substr(0, i + 1);
                return part;
            }
        }
        return "";
    }
};