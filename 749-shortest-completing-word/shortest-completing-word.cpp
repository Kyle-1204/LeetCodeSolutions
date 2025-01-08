class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> mp;
        string shortestWord;
        int maxLen = INT_MAX;
        for (auto& chr: licensePlate) {
            if (isalpha(chr)) mp[tolower(chr)]++;
        }
        //for (auto& val: mp) cout << val.first << " " << val.second << endl;
        for (auto& word: words){
            unordered_map<char, int> currLetters;
            int len = word.length();
            if (len < maxLen){
                for (int i = 0; i < len; i++){
                    char currChr = word[i];
                    if (mp.find(currChr) != mp.end() && currLetters[currChr] < mp[currChr]) currLetters[currChr]++;
                    if (currLetters == mp) {
                        maxLen = len;
                        shortestWord = word;
                        break;
                    }
                }
            }
        }
        return shortestWord;
    }
};