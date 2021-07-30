class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,INT_MAX));
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0; j<m;j++){
                if(mat[i][j] == 0){
                    vis[i][j] = 1;
                    ans[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        
        vector<vector<int>>dir = {{0,1},{-1,0},{1,0},{0,-1}};
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            int row = temp.first;
            int col = temp.second;
            
            for(int i=0;i<4;i++){
                int r = row+dir[i][0];
                int c = col+dir[i][1];
                
                if(r < 0 || r == n || c < 0 || c == m || vis[r][c] == 1){
                    continue;
                }
                ans[r][c] = ans[row][col]+1;
                vis[r][c] = 1;
                q.push({r,c});
            }
        }
        return ans;
    }
};
