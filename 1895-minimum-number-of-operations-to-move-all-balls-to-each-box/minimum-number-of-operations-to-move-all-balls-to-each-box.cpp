class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                 if(i==j){
                    cout<<"i";
                    continue;
                 }
                 else if(boxes[j]=='1'){
                    if(j>i){
                            int a = j-i;
                            ans[i]=ans[i]+a;
                    }
                    else{
                        int a=i-j;
                        ans[i]=ans[i]+a;
                    }
                    
                }
                else if(boxes[j]=='0'){
                    continue;
                }
              }
        }
        return ans;
    }
};