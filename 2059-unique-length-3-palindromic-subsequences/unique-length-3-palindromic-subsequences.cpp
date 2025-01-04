class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string> uniqPals;
        vector<int> first(26, -1), last(26); //char, index
        int len = s.length();
        for (int i = 0; i < len; i++) {
            char chr = s[i];
            if (first[chr - 'a'] == -1) first[chr - 'a'] = i;
            else last[chr - 'a'] = i;
        }
        for (int i = 0; i < 26; i++){
            if (last[i]){
                char chr = i + 'a';
                for (int j = first[i] + 1; j < last[i]; j++) uniqPals.insert(string(1, chr) + s[j] + string(1, chr));
            }
        }
        return uniqPals.size();
    }
};