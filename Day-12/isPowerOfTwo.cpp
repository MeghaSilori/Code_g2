class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int m = -n;
        return (n&m) == n;
    }
};