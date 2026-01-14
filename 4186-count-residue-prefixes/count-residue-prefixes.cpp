class Solution {
public:
    int residuePrefixes(string s) {
        int ans = 0;
        unordered_set<char> chars;
        for (int i = 0; i < s.length(); i++){
            chars.insert(s[i]);
            if (chars.size() == (i+1) % 3) ans++;
        }
        return ans;
    }
};