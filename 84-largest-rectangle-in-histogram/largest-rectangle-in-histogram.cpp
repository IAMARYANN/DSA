class Solution {
public:
    vector<int>findNSL(vector<int>arr){
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans.push_back(-1);
            }
            else if(st.size()>0 && arr[i]>st.top().first){
                ans.push_back(st.top().second);
            }
            else{
                while(st.size()>0 &&  arr[i]<=st.top().first){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top().second);
                }
            }
            st.push({arr[i],i});
        }
        return ans;
    }
        vector<int>findNSR(vector<int>arr){
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(n);
            }
            else if(st.size()>0 && arr[i]>st.top().first){
                ans.push_back(st.top().second);
            }
            else{
                while(st.size()>0 &&  arr[i]<=st.top().first){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(n);
                }
                else{
                    ans.push_back(st.top().second);
                }
            }
            st.push({arr[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>right=findNSR(heights);;
        vector<int>left =findNSL(heights) ;
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};