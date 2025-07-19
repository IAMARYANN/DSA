class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int maxl=0;
        int max_freq=0;
        vector<int> freq(26, 0);
        int n = s.size();
        while(r<n){
            freq[s[r]-'A']++;
            max_freq = max(max_freq, freq[s[r] - 'A']);
            while ((r - l + 1) - max_freq > k) {
            freq[s[l] - 'A']--;
            l++;
           }
           maxl=max(maxl,r - l + 1);
           r++;
        }
        return maxl;
    }
};