class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = 0, q = 0;
        vector<int> ans;

        while (p < m && q < n) {
            if (nums1[p] <= nums2[q]) {
                while (p < m && nums1[p] <= nums2[q]) {
                    ans.push_back(nums1[p]);
                    p++;
                }
                if (q < n) {
                    ans.push_back(nums2[q]);
                    q++;
                }
            } else {
                while (q < n && nums2[q] < nums1[p]) {
                    ans.push_back(nums2[q]);
                    q++;
                }
                if (p < m) {
                    ans.push_back(nums1[p]);
                    p++;
                }
            }
        }

        while (p < m) {
            ans.push_back(nums1[p]);
            p++;
        }
        while (q < n) {
            ans.push_back(nums2[q]);
            q++;
        }
        nums1=ans;
    }
};