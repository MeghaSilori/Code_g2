class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k=4;
        while(k--){
            if(mat == target)
                return true;
            rotate(mat);
        }
        if(mat == target)
            return true;
        return false;
    }
    void rotate(vector<vector<int>> &mat){
        int l=0, r=mat.size()-1;
        while(l<r){
            for(int i=0; i<r-l; i++){
                int t=l, b=r;
                int temp = mat[t][l+i];
                mat[t][l+i] = mat[b-i][l];
                mat[b-i][l] = mat[b][r-i];
                mat[b][r-i] = mat[t+i][r];
                mat[t+i][r] = temp;
            }
            l+=1;
            r-=1;
        }
    }
};
