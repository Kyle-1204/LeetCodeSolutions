class Solution {
public:
    string findValidPair(string s) {
        int len = s.length();
        unordered_map<char, int> mp;
        for (int i = 0; i < len; i++) mp[s[i]]++;
        for (int j = 0; j < len - 1; j++){
            if (s[j] != s[j+1] && mp[s[j]] == s[j] - '0' && mp[s[j+1]] == s[j+1] - '0') return s.substr(j, 2);
        }
        return "";
    }
};