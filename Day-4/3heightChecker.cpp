/*You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).
Return the number of indices where heights[i] != expected[i].
*/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp=heights;
        int res=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            if(heights[i]!=temp[i])
                res++;
        }
        return res;
    }
};