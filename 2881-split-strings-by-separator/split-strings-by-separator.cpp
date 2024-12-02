class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for (auto& word: words){
            string currWord;
            for (auto& chr: word){
                if (chr != separator) currWord += chr;
                else if (currWord != ""){
                    ans.push_back(currWord);
                    currWord = "";
                }
            }
            if (currWord != "") ans.push_back(currWord);
        }
        return ans;
    }
};