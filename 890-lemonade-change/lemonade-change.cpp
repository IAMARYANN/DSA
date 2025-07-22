class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp;
        for(int i=0;i<bills.size();i++){
            mp[bills[i]]++;
            int ans=bills[i]-5;
            while(ans>0){
                if(mp[20]==0 && mp[10]==0 && mp[5]==0 && ans>0){
                    return false;
                }
                else if(ans>=20 && mp[20]>0){
                    ans-=20;
                    mp[20]--;
                }
                else if(ans>=10 && mp[10]>0){
                    ans-=10;
                    mp[10]--;
                }
                else if(mp[5]>0){
                    ans-=5;
                    mp[5]--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};