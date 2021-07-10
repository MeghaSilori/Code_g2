class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        int n = columnNumber;
        while(n != 0){
            char ch = (--n%26) + 'A';
            res = ch + res;
            n /= 26;
        }
        return res;
    }
};