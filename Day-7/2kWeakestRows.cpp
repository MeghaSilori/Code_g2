class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        for(int j=0; j<mat[0].size() && k; j++){
            for(int i=0; i<mat.size() && k; i++){
                if(j==0 && mat[i][j] == 0){
                    res.push_back(i); 
                    k--;
                }
                else if(mat[i][j] == 0 && mat[i][j-1] == 1){
                    res.push_back(i); 
                    k--;
                }
            }
        }
        for(int i=0; i<mat.size() && k; i++){
            if(mat[i][mat[0].size()-1] == 1){
                res.push_back(i); 
                k--;
            }
        }
        return res;
    }
};