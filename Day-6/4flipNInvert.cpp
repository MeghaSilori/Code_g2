class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int k=0; k<image.size(); k++){
            for(int i=0,j=image[0].size()-1; i<=j; i++,j--){
                int temp = image[k][i];
                image[k][i] = 1^image[k][j];
                image[k][j] = 1^temp;
            }
        }
        return image;
    }
};