#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> mp;
    vector<int> res;
    for(int num : nums1){
        mp[num]=1;
    }
    for(int num: nums2){
        if (mp.find(num) != mp.end())
            mp[num]++;
    }
    for(pair<int,int> p:mp){
        if(p.second>1){
            res.push_back(p.first);
        }
    }
    return res;
}

int main() {
    int n,m,x;
    cin>>n;
    vector<int> arr1, arr2, res;
    for(int i=0; i<n; i++){
        cin>>x;
        arr1.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>x;
        arr2.push_back(x);
    }
    res = intersection(arr1, arr2);
    cout << "Intersection: ";
    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";
}
