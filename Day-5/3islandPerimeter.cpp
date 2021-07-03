class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int perimeter=0;
        int u,d,l,r;
        for(int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    u = i==0 ? 0 : grid[i-1][j];
                    l = j==0 ? 0 : grid[i][j-1];
                    d = i==n-1 ? 0 : grid[i+1][j];
                    r = j==m-1 ? 0 : grid[i][j+1];
                    perimeter += 4-(u+l+d+r);
                }
            }
        }
        return perimeter;
    }
};