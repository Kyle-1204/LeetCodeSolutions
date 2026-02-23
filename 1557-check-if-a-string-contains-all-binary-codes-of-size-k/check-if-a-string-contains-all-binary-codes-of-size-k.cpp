class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.length() <= k) return false;
        unordered_set<string> strs;
        for (int i = 0; i <= s.length() - k; i++){
            strs.insert(s.substr(i, k));
        }
        return (strs.size() == pow(2,k));
    }
};