class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string> uniqPals;
        unordered_map<char, int> first, last; //char, index
        int len = s.length();
        for (int i = 0; i < len; i++) {
            char chr = s[i];
            if (first.find(chr) == first.end()) first[chr] = i;
            else last[chr] = i;
        }
        for (auto& val: last){
            for (int i = first[val.first] + 1; i < val.second; i++) {
                string sub;
                sub += val.first;
                sub += s[i];
                sub += val.first;
                uniqPals.insert(sub);
            }
        }
        return uniqPals.size();
    }
};