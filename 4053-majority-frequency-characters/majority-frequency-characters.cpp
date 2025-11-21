class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char, int> charMap;
        unordered_map<int, vector<char>> groupMap;
        for (auto& chr: s) charMap[chr]++;
        for (auto& val: charMap) groupMap[val.second].push_back(val.first);
        int maxSize = 0, freq = 0;
        string ans;
        for (auto& val: groupMap){
            if (val.second.size() > maxSize){
                ans = "";
                for (auto& chr: val.second) ans += chr;
                maxSize = ans.length();
                freq = val.first;
            }
            else if (val.second.size() == maxSize && val.first > freq){
                ans = "";
                for (auto& chr: val.second) ans += chr;
                freq = val.first;
            }
        }
        return ans;
    }
};