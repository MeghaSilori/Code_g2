class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> res(grid);
        int n=grid.size(), m=grid[0].size();
        k = k%(m*n);
        for(int i=0; i<n;i++){
            for(int j=0; j<m; j++){
                int t = ((m*i+j)+k)%(m*n);
                int x=t/m, y=t%m;
                res[x][y] = grid[i][j];
            }
        }
        return res;
    }
};