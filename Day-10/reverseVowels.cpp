class Solution {
public:
    bool isVowel(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' ||
            ch=='E' || ch=='I' || ch=='O' || ch=='U');
    }
    string reverseVowels(string s) {
        int l=0,r=s.size();
        while(l<r){
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l] ,s[r]);
                l++;
                r--;
            }
            if(!isVowel(s[l]))
                l++;
            if(!isVowel(s[r]))
                r--;
        }
        return s;
    }
};