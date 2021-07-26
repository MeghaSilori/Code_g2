class Solution {
public:
    vector<vector<int> > dp;
    int mod = 1000000007;
    vector<vector<int> > pascal(int n){
        vector<vector<int> > res(n+1, vector<int>(n+1));
        for(int i=0;i<=n;i++)
            res[i][0]=res[i][i]=1;
        for(int i=2;i<=n;i++)
            for(int j=1;j<i;j++)
                res[i][j]=(res[i-1][j-1]%mod + res[i-1][j]%mod)%mod;      
        return res;
    }
    int numOfWays(vector<int>& nums) {
        dp = pascal(nums.size());
        return compute(nums) - 1;
    }
    int compute(vector<int> &nums){
        if(nums.size() == 0 || nums.size() == 1) return 1;
        int root = nums[0];
        vector<int> left, right;
        for(int i=1 ;i<nums.size(); i++){
            if(nums[i] < root)
                left.push_back(nums[i]);
            else
                right.push_back(nums[i]);
        }
        long long lc = compute(left)%mod, rc=compute(right)%mod;
        return ((dp[left.size()+right.size()][left.size()]* lc) %mod * rc) %mod;
    }
};