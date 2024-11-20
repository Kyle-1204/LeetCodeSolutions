class Solution {
public:
    string sortSentence(string s) {
        map<char, string> mp;
        stringstream ss(s);
        string word, sentence = "";
        while (ss >> word){
            int len = word.length() - 1;
            mp[word[len]] = word.substr(0, len);
        }
        for (auto& word: mp) sentence += word.second + ' ';
        return sentence.substr(0, sentence.length() - 1);
    }
};