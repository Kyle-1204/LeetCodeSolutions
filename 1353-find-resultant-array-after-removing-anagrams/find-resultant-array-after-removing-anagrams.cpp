class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        string lastWord;
        for (auto& word: words){
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            if (sortedWord != lastWord){
                lastWord = sortedWord;
                ans.push_back(word);
            }
        }
        return ans;
    }
};