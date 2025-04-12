class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        ans=matrix;
        int row1=ans.size()-1;
        int col1=ans[0].size();
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            int a=0;
            for(int j=0;j<col;j++){
                ans[a][row1]=matrix[i][j];
                a++;
            }
            row1--;
        }
        matrix=ans;
    }
};