class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0 ;i<matrix.size(); i++){
            int k=0, min=INT_MAX, max=INT_MIN;
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] < min){
                    min = matrix[i][j];
                    k=j;
                }
            }
            for(int j=0; j<matrix.size(); j++){
                if(matrix[j][k] > max){
                    max = matrix[j][k];
                }
            }
            if(max == min)
                res.push_back(max);
        }
        return res;
    }
};