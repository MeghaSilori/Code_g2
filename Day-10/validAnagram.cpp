class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int x[26] ={0};
        for(int i=0; i<s.size(); i++){
            x[s[i] - 'a']++;
            x[t[i] - 'a']--;
        }
        for(int i=0; i<26; i++){
            if(x[i] != 0)
                return false;
        }
        return true;
    }
};