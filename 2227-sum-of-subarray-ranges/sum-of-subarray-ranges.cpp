class Solution {
public:
    vector<int>NSL(vector<int>arr){
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans.push_back(-1);
            }
            else if(st.size()>0 && st.top().first < arr[i]){
                ans.push_back(st.top().second);
            }
            else{
                while(st.size()>0 && st.top().first>=arr[i]){
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
    vector<int>NSR(vector<int>arr){
         int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(n);
            }
            else if(st.size()>0 && st.top().first < arr[i]){
                ans.push_back(st.top().second);
            }
            else{
                while(st.size()>0 && st.top().first>arr[i]){
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
    long long int findleft(vector<int>&arr){
        int n=arr.size();
        vector<int>ans1;
        vector<int>ans2;
        ans1=NSL(arr);
        ans2=NSR(arr);
        long long sum=0;
        for(int i=0;i<n;i++){
            long int ls=i-ans1[i];
            long int rs=ans2[i]-i;
            
            sum=(ls*rs*arr[i])+sum;
        }
        return sum;
    }
        vector<int>NSL1(vector<int>arr){
        int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans.push_back(-1);
            }
            else if(st.size()>0 && st.top().first > arr[i]){
                ans.push_back(st.top().second);
            }
            else{
                while(st.size()>0 && st.top().first<=arr[i]){
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
    vector<int>NSR2(vector<int>arr){
         int n=arr.size();
        stack<pair<int,int>>st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(n);
            }
            else if(st.size()>0 && st.top().first > arr[i]){
                ans.push_back(st.top().second);
            }
            else{
                while(st.size()>0 && st.top().first<arr[i]){
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
    long long int findright(vector<int>&arr){
       int n=arr.size();
        vector<int>ans1;
        vector<int>ans2;
        ans1=NSL1(arr);
        ans2=NSR2(arr);
        long long sum=0;
        for(int i=0;i<n;i++){
            long int ls=i-ans1[i];
            long int rs=ans2[i]-i;
            
            sum=(ls*rs*arr[i])+sum;
        }
        return sum;
    }
    long long subArrayRanges(vector<int>& nums) {
       return findright(nums) - findleft(nums);
    }
};