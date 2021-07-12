class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res(s.size(), INT_MAX);
        vector<int> index;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                index.push_back(i);
                res[i] = 0;
            }
        }
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<index.size(); j++){
                res[i] = min(res[i], abs(index[j]-i));
            }
        }
        return res;
    }
};