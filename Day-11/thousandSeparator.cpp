class Solution {
public:
    string thousandSeparator(int n) {
        if(n == 0) return "0";
        stack<char> number;
        int i = 0;
        while(n>0){
            if(i == 3){
                number.push('.');
                i = 0;
            }
            number.push('0' + n%10);
            n /= 10;
            i++;
        }
        string ans = "";
        while(!number.empty()){
            ans += number.top();
            number.pop();
        }
        return ans;
    }
};