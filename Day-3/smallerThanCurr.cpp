class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            int current = nums[i];
            for(int j = 0; j < nums.size(); j++) {
                if(current > nums[j])
                    count++;
            }
            smaller[i] = count;
        }
        return smaller;
    }
};