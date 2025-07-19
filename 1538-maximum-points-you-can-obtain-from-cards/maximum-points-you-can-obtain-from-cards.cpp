class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;int rsum=0;
        int tsum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        int i=1;
        int maxi=lsum;
        tsum=lsum+rsum;
        int a=k;
        while(k>0){
            cout<<tsum;
            tsum-=cardPoints[k-1];
            tsum+=cardPoints[n-i];
            maxi=max(tsum,maxi);
            k--;
            i++;
        }
        return maxi;
    }
};