#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& arr) {
    vector<int> res;
    for(int i=0,j=arr.size()/2; i<arr.size()/2; i++,j++){
        res.push_back(arr[i]);
        res.push_back(arr[j]);
    }
    return res;
}

int main() {
    int n,x,key;
    cout<<"Input: ";
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    arr = shuffle(arr);
    cout<<"Output: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
