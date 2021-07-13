#include <iostream>
using namespace std;
int decimalToBase(int n, int b){
    int res=0;
    int power = 1;
    while(n!=0){
        int digit = n%b;
        n /= b;
        res += digit * power;
        power *= 10;
    }
    return res;
}
int main(){
    int n,b;
    cin>>n>>b;
    cout<< decimalToBase(n, b);
    return 0;
}