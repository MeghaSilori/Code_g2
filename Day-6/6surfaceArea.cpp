class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int ans = 0, n=grid.size(); 
        for(int i=0 ;i<n; i++){
            for(int j=0 ;j<n; j++){
                if(grid[i][j] > 0){
                    ans += 2;
                    if(i == 0) ans += grid[i][j];
                    else 
                        ans += grid[i-1][j] < grid[i][j] ? grid[i][j]-grid[i-1][j] : 0;
                    if(j == 0) ans += grid[i][j];
                    else 
                        ans += grid[i][j-1] < grid[i][j] ? grid[i][j]-grid[i][j-1] : 0;
                    if(i == n-1) ans += grid[i][j];
                    else 
                        ans += grid[i+1][j] < grid[i][j] ? grid[i][j]-grid[i+1][j] : 0;
                    if(j == n-1) ans += grid[i][j];
                    else 
                        ans += grid[i][j+1] < grid[i][j] ? grid[i][j]-grid[i][j+1] : 0;
                }
            }
        }
        return ans;
    }
};