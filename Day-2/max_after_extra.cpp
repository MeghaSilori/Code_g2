#include <bits/stdc++.h>
using namespace std;

vector<bool> max_extra(vector<int>& nums, int m) {
    vector<bool> res;
    int max = *(max_element(nums.begin(), nums.end()));
    for(int num : nums){
        if(num+m < max)
            res.push_back(false);
        else
            res.push_back(true);
    }
    return res;
}

int main() {
    int n,m,x;
    cin>>n;
    vector<int> arr;
    vector<bool> res;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    cin>>m;
    res = max_extra(arr, m);
    cout << "Output: ";
    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";
}
