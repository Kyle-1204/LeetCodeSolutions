class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0, prefLen = pref.length();
        for (auto &word: words){
            if (word.substr(0, prefLen) == pref) ans++;
        }
        return ans;
    }
};