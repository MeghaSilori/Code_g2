class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size();  i++) {
            int maxRow = 0; 
            int maxCol = 0;  
            for (int j = 0; j < grid.size(); j++) {
                if (grid[i][j] > 0) 
                    ans++;  
                maxRow = max(maxRow, grid[i][j]);
                maxCol = max(maxCol, grid[j][i]);
            }
            ans += maxRow + maxCol;
        }

        return ans;
    }
};