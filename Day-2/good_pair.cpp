#include <bits/stdc++.h>
using namespace std;

int good_pair(vector<int>& nums) {
    unordered_map<int,int> mp;
    int res=0;
    for(int num: nums){
        res += mp[num];
        mp[num]++;
    }
    return res;
}

int main() {
    int n,x;
    cin>>n;
    vector<int> arr;
    int res;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    res = good_pair(arr);
    cout << "Number of good pair: "<<res;
    
}
