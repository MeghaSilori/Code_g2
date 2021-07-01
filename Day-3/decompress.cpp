class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size()/2; i++){
            int freq = nums[2*i];
            int value = nums[2*i+1];
            for(int i=0 ;i<freq; i++){
                res.push_back(value);
            }
        }
        return res;
    }
};