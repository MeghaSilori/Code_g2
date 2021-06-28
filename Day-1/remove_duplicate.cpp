#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int>& arr) {
    int i=0;
    for(int j=0; j<arr.size(); j++){
        if(arr[j] != arr[i])
        {
            arr[++i] = arr[j];
        }
    }
    return i+1;
}

int main() {
    int n,x;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    int k = remove(arr);
    cout << "Array new length: " << k << endl;
    cout<<"Array: ";
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}
