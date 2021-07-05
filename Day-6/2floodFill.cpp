class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if(color != newColor) solve(image, sr, sc, color, newColor);
        return image;     
    }
    void solve(vector<vector<int>>& image, int sr, int sc,int color, int newColor){ 
        if(image[sr][sc] == color){
            image[sr][sc] = newColor;
            if(sr>0)
                solve(image,sr-1,sc,color,newColor);
            if(sc>0)
                solve(image,sr,sc-1,color,newColor);
            if(sr<image.size()-1)
                solve(image,sr+1,sc,color,newColor);
            if(sc<image[0].size()-1)
                solve(image,sr,sc+1,color,newColor);
        }
    }
};