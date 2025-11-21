class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string> uniqPals;
        vector<int> firsts(26, -1), lasts(26);
        for (int i = 0; i < s.length(); i++){
            int chr = s[i] - 'a';
            if (firsts[chr] == -1) firsts[chr] = i;
            else lasts[chr] = i;
        }
        for (int i = 0; i < 26; i++){
            if (lasts[i]){
                for (int j = firsts[i] + 1; j < lasts[i]; j++){
                    char chr = i + 'a';
                    string str;
                    str += chr;
                    str += s[j];
                    str += chr;
                    uniqPals.insert(str);
                }
            }
        }
        return uniqPals.size();
    }
};