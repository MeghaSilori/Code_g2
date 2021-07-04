class Solution {
public:
    unsigned int countBits(unsigned int n)
    {
        unsigned int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> vec;
        for(int i=0;i<arr.size();i++){
            vec.push_back(make_pair(countBits(arr[i]),arr[i]));
            
        }
        sort(vec.begin(), vec.end());
        vector<int> v;
        for (int i = 0; i < vec.size(); i++)
	    {
		    v.push_back(vec[i].second);
        }
        return v;    
    }   
};