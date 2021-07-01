class Solution {
public:
    string truncateSentence(string s, int k) {
        int words=0;
        string res= "";
        for (int i = 0; i < s.size(); ++i){
            if(s[i]==' '){
                words++;
            }
            if(words<k){
                res=res+s[i];
            }
        }
        return res;
    }
};