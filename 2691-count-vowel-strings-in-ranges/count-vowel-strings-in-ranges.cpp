class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size(), prefix = 0, suffix = 0, qSize = queries.size();
        string vowels = "aeiou";
        vector<int> prefixes(n), suffixes(n), ans(qSize);
        for (int i = n - 1; i >= 0; i--){
            suffixes[i] = suffix;
            if (vowels.contains(words[i][0]) && vowels.contains(words[i][words[i].length() - 1])){
                suffix++;
                prefix++;
            }
            prefixes[i] = prefix;
        }
        for (int i = 0; i < qSize; i++) {
            ans[i] = prefixes[queries[i][0]] - suffixes[queries[i][1]];
        }
        return ans;
    }
};