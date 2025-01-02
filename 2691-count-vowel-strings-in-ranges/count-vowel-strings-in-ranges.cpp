class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size(), prefix = 0, suffix = 0, qSize = queries.size();
        string vowels = "aeiou";
        vector<int> prefixes(n), suffixes(n), ans(qSize);
        for (int i = 0; i < n; i++){
            suffixes[n - i - 1] = suffix;
            //if (vowels.find(words[i][0]) != string::npos && vowels.find(words[i][words[i].length() - 1] != string::npos)) prefix++;
            if (vowels.contains(words[n-i-1][0]) && vowels.contains(words[n-i-1][words[n-i-1].length() - 1])){
                //cout << words[n-i-1] << " " << words[n-i-1][0] << " " <<  words[n-i-1][words[n-i-1].length() - 1] << endl;
                suffix++;
                prefix++;
            }
            prefixes[n - i - 1] = prefix;
        }
        for (int i = 0; i < qSize; i++) {
            //cout << prefixes[queries[i][0]] << "  " << suffixes[queries[i][1]] << endl;
            ans[i] = prefixes[queries[i][0]] - suffixes[queries[i][1]];
        }
        return ans;
    }
};