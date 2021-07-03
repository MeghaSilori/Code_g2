class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n1 = nums.size(), n2 = nums[0].size();
        if(n1*n2 != r*c)
            return nums;
        vector<vector<int>> res;
        vector<int> s;
        int rows = 0, cols = 0;
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++)
                s.push_back(nums[i][j]);
        }
        for (int i = 0; i < r; i++) {
            vector<int> n;
            for (int j = 0; j < c; j++)
                n.push_back(s[i*r+j]);
            res.push_back(n);
        }
        return res;
    }
};