class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> mp;
        for (auto& chr: word1) mp[chr]++;
        for (auto& chr: word2) mp[chr]--;
        for (auto& val: mp){
            if (abs(val.second) > 3) return false;
        }
        return true;
    }
};