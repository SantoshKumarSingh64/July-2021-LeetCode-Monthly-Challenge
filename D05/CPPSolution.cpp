class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        if((n*m) != (r*c))
            return mat;
      
        int row = 0, col = -1;
        vector<vector<int>>ans(r,vector<int>(c,0));
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
                if(col == m-1){
                        row++;
                        col = 0;    
                }    
                else{
                    col++;
                }
                ans[i][j] = mat[row][col];
            }
        }
        return ans;
    }
};
