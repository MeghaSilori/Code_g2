#include <iostream>
using namespace std;
int baseToDecimal(int n, int b){
    int res=0;
    int power = 1;
    while(n!=0){
        int digit = n%10;
        n /= 10;
        res += digit * power;
        power *= b;
    }
    return res;
}
int main(){
    int n,b;
    cin>>n>>b;
    cout<< baseToDecimal(n, b);
    return 0;
}