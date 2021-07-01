class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        int res=0,flag=1;
        for(int i=0; i<allowed.size(); i++){
            mp[allowed[i]]++;
        }
        for(string s : words){
            for(int i=0;i<s.size();i++){
                if(mp[s[i]]==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                res++;
            flag=1;
        }
        return res;
    }
};