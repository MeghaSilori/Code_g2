class Solution {
public:
    int longestPalindrome(string s) {
        int freq[126] = {0}, count=0;
        for(char ch: s)
            freq[ch]++;
        for(int i=0; i<126; i++){
            if(freq[i]%2)
                count++;
        }
        if(count)
            return s.size()-count+1;
        return s.size();
    }
};