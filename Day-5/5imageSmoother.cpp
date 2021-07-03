class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> res(img);
        int count;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=img[i][j];
                count=1;
                //Up side
                if(i-1>=0){
                    res[i][j]+=img[i-1][j];
                    count++;
                }
                //Down side
                if(i+1<m){
                    res[i][j]+=img[i+1][j];
                    count++;
                }
                //Left side
                if(j-1>=0){
                    res[i][j]+=img[i][j-1];
                    count++;
                }
                //Right side
                if(j+1<n){
                    res[i][j]+=img[i][j+1];
                    count++;
                }
                //Up left side
                if(i-1>=0 && j-1>=0){
                    res[i][j]+=img[i-1][j-1];
                    count++;
                }
                //Up right side
                if(i-1>=0 && j+1<n){
                    res[i][j]+=img[i-1][j+1];
                    count++;
                }
                //Down left side
                if(i+1<m && j-1>=0){
                    res[i][j]+=img[i+1][j-1];
                    count++;
                }
                //Down right side
                if(i+1<m && j+1<n){
                    res[i][j]+=img[i+1][j+1];
                    count++;
                }
                res[i][j] /= count;
            }
        }
        return res;
    
    }
};