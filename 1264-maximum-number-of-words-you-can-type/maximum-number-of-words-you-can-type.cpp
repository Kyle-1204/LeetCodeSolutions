class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string word;
        vector<int> chars(26);
        int ans = 0;
        for (auto& chr: brokenLetters) chars[chr - 'a'] = 1;
        while (ss >> word){
            bool fullWord = true;
            for (auto& chr: word){
                if (chars[chr - 'a'] == 1){
                    fullWord = false;
                    break;
                }
            }
            if (fullWord) ans++;
        }
        return ans;
    }
};