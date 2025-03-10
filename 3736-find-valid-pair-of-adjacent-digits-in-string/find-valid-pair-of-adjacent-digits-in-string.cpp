class Solution {
public:
    string findValidPair(string s) {
        int len = s.length();
        unordered_map<char, int> mp;
        for (int i = 0; i < len; i++) mp[s[i]]++;
        for (int j = 0; j < len - 1; j++){
            char first = s[j], second = s[j+1];
            if (first != second && mp[first] == first - '0' && mp[second] == second - '0') return s.substr(j, 2);
        }
        return "";
    }
};