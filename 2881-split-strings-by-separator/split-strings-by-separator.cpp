class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for (auto& word: words){
            string currWord;
            for (auto& chr: word){
                if (chr == separator){
                    if (currWord != ""){
                        ans.push_back(currWord);
                        currWord = "";
                    }
                }
                else currWord += chr;
            }
            if (currWord != "") ans.push_back(currWord);
        }
        return ans;
    }
};