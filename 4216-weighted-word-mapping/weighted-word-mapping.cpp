class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for (auto& word: words){
            int sum = 0;
            for (auto& letter: word) sum += weights[letter - 'a'];
            cout << sum << endl;
            ans += ('z' - (sum % 26));
        }
        return ans;
    }
};