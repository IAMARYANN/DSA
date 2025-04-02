class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;
     for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    nums.clear(); // Clear original array

    // Rebuild nums with elements based on frequency
    for (auto &p : freq) {
            while (p.second > 0) {  // Fix: Properly decrease frequency
                nums.push_back(p.first);
                p.second--;
        }
    }

    // Print the modified nums
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    }
};