class Solution {
public:
    string addStrings(string num1, string num2) {
        int i,j,c=0;
        string ans="";
        for(i=num1.size()-1,j=num2.size()-1;i>=0||j>=0;i--,j--)
        {
            int n1=i<0 ? 0:num1[i]-'0';
            int n2=j<0 ? 0:num2[j]-'0';
            int sum=n1+n2+c;
            ans += to_string(sum%10);
            c=sum/10;
        }
        if(c==1)
            ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};