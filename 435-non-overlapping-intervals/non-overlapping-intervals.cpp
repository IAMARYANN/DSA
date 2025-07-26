class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        sort(intervals.begin(),intervals.end(),[] (const vector<int>&a,const vector<int>&b){
            return b[1]>a[1];
        });
        int count  = 0;
        int n = intervals.size();
        int end = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0] < end ){
                count++;
            }
            else{
                end=intervals[i][1];
            }
        }
        
        return count;
    }
};