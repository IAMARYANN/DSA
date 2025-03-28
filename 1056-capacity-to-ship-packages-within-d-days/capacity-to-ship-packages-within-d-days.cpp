class Solution {
public:
    bool check(vector<int>& weights, int k, int days) {
        int dayCount = 1;  
        int currentWeight = 0;
        
        for (int w : weights) {
            if (currentWeight + w > k) {  
                dayCount++;  
                currentWeight = 0;
            }
            currentWeight += w;
        }
        
        return dayCount <= days;  
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()); 
        int high = accumulate(weights.begin(), weights.end(), 0); 
        int ans = high;
        
         while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(weights, mid, days)) {
                ans = mid;  
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        }
        
        return ans;
    }
};