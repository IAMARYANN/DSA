class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
       
    if (intervals.empty()) return {}; // Edge case: empty input

    // Step 1: Sort intervals based on start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    for (const auto& interval : intervals) {
        // If merged list is empty or there is no overlap, add the interval
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        } else {
            // Merge the intervals by updating the end time
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    return merged;


    }
};