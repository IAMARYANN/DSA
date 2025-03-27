class Solution {
public:
  bool areanagram(string strs1, string strs2){
    sort(strs1.begin(),strs1.end());
    sort(strs2.begin(),strs2.end());
    return strs1 == strs2 ;
  }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

    for (string word : strs) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());  // Sort the word
        anagramGroups[sortedWord].push_back(word);  // Group by sorted word
    }

    vector<vector<string>> result;
    for (auto pair : anagramGroups) {
        result.push_back(pair.second);
    }

    return result;
    }
};