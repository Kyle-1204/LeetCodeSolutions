class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        unordered_set<string> strs;
        sort(words.begin(), words.end(), [] (const string &word1,  const string &word2){
            return word1.length() > word2.length();
        });
        for (auto& word: words){
            if (strs.find(word) != strs.end()) ans.push_back(word);
            else{
                int len = word.length();
                for (int i = 0; i < len; i++){
                    string str;
                    for (int j = i; j < len; j++){
                        str += word[j];
                        strs.insert(str);
                    }
                }
            }
        }
        return ans;
    }
};