class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1, res=0;
        while(i>=0 && s[i] == ' ')
            i--;
        for(; i>=0 && s[i]!=' '; i--){
            res++;
        }
        return res;
    }
};