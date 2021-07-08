#include<bits/stdc++.h>
using namespace std;
string lcs(vector<string> &s){
    for(int i=0; i<s.size(); i++){
        reverse(s[i].begin(), s[i].end());
    }
    sort(strs.begin(), strs.end());
    int minl = min(strs[0].size(),strs[strs.size()-1].size());
    int i;
    string res;
    for(i=0 ;i<minl; i++){
        if(strs[0][i] != strs[strs.size()-1][i])
            break;
    }
    res = strs[0].substr(0,i);
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    int n;
    cin>>n;
    string m;
    vector<string> str;
    for(int i=0; i<n; i++){
        cin>>m;
        str.push_back(m);
    }
    cout<<lcs(str);
}