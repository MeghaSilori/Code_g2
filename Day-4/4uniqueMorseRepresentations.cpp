class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> a ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(int i=0;i<words.size();i++){
            string s=words[i], morse="";
            for(int j=0; j<s.size(); j++){
                morse += a[s[j]-'a'];
            }
            st.insert(morse);
        }
        return st.size();
    }
};