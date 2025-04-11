class Solution {
public:
    void makezero(vector<vector<int>>& ans,int x ,int y){
           int row=ans.size();
           int col=ans[0].size();
           for(int i=0;i<row;i++){
               ans[i][y]=0;
           }
           for(int i=0;i<col;i++){
            ans[x][i]=0;
           }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        ans=matrix;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    makezero(ans,i,j);
                }
            }
        }
        matrix=ans;
    }
};