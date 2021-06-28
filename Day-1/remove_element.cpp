#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int>& arr,int key) {
    int i=0,j=arr.size()-1;
    while(i<=j){
        if(arr[i] == key)
        {
            arr[i] = arr[j];
            j--;
        }
        else{
            i++;
        }
    }
    return i;
}

int main() {
    int n,x,key;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    cin>>key;
    int nn = remove(arr,key);
    cout << "Array new length: " << nn << endl;
    cout<<"Array: ";
    for(int i=0; i<nn; i++){
        cout<<arr[i]<<" ";
    }
}
