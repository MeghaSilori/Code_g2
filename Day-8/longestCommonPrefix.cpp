class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int minl = min(strs[0].size(),strs[strs.size()-1].size());
        int i;
        for(i=0 ;i<minl; i++){
            if(strs[0][i] != strs[strs.size()-1][i])
                break;
        }
        return strs[0].substr(0,i);
    }
};