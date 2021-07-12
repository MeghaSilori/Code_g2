class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(int i=0; i<paragraph.size(); i++){
            paragraph[i] = isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' ';
        }
        stringstream ss(paragraph);
        unordered_set<string> set(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        int max_freq = 0;
        string word, res;
        while(ss >> word)
            if(!set.count(word))
                freq[word]++;
        
        for(auto p: freq){
            if(p.second > max_freq){
                res = p.first;
                max_freq = p.second;
            }
        }
        return res;
    }
};