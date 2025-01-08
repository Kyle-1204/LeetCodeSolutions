class Solution {
public:
    int similarPairs(vector<string>& words) {
        int len = words.size(), numPairs = 0;
        for (int i = 0; i < len - 1; i++){
            unordered_set<char> set1;
            for (int k = 0; k < words[i].size(); k++) set1.insert(words[i][k]);
            for (int j = i + 1; j < len; j++){
                unordered_set<char> set2;
                for (int k = 0; k < words[j].size(); k++) set2.insert(words[j][k]);
                if (set1 == set2) numPairs++;
            }
        }
        return numPairs;
    }
};