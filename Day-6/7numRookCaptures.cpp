class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans=0;
        int i, j;
        for (i = 0; i < 64; i++) {
            if (board[i / 8][i % 8] == 'R')
                break;
        }
        j = i % 8;
        i = i / 8;
        for(int k=i-1; k>=0; k--){
            if (board[k][j] == 'p') {
                ans++;
                break;
            }
            else if(board[k][j] == 'B')
                break;
        }
        for(int k=i+1; k<8; k++){
            if (board[k][j] == 'p') {
                ans++;
                break;
            }
            else if(board[k][j] == 'B')
                break;
        }
        for(int k=j-1; k>=0; k--){
            if (board[i][k] == 'p') {
                ans++;
                break;
            }
            else if(board[i][k] == 'B')
                break;
        }
        for(int k=j+1; k<8; k++){
            if (board[i][k] == 'p') {
                ans++;
                break;
            }
            else if(board[i][k] == 'B')
                break;
        }
        return ans;
    }
};