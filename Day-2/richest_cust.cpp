#include <iostream>
#include <vector>
using namespace std;

int richest_cust(vector<vector<int> >& accounts) {
    int maxsum=0, res=0;
    for(int i=0; i<accounts.size(); i++){
        int sum=0;
        for(int j=0; j<accounts[i].size(); j++){
            sum += accounts[i][j];
        }
        if(sum>maxsum){
            maxsum = sum;
            res = i+1;
        }
    }

    return res;
}

int main() {
    int n,m,x;
    cin>>n>>m;
    vector<vector<int> > arr;
    for(int i=0; i<n; i++){
        vector<int> t;
        for(int j=0 ;j<m; j++){
            cin>>x;
            t.push_back(x);
        }
        arr.push_back(t);
    }
    int k = richest_cust(arr);
    cout << "Richest customer: " << k << endl;
}
