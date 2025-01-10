class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> chars(26);
        vector<string> ans;
        for (auto& word: words2){
            vector<int> currChrs(26);
            for (auto& chr: word){
                int idx = chr - 'a';
                currChrs[idx]++;
                if (currChrs[idx] > chars[idx]) chars[idx]++;
            }
        }
        for (auto& word: words1){
            vector<int> currChrs(26);
            for (auto& chr: word){
                int idx = chr - 'a';
                if (currChrs[idx] < chars[idx]) currChrs[idx]++;
                if (currChrs == chars){
                    ans.push_back(word);
                    break;
                }
            }
        }
        return ans;
    }
};