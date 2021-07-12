class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int line[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        vector<string> res;
        for(string s : words){
            int flag = 0;
            int temp = line[tolower(s[0]) - 'a'];
            for(int i=1; i<s.size(); i++){
                if(line[tolower(s[i]) - 'a'] != temp){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                res.push_back(s);
            }
        }
        return res;
    }
};