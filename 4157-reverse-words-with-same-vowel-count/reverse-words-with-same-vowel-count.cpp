class Solution {
private:
    int findNumVowels(string str){
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int numVowels = 0;
        for (auto& chr: str){
            if (find(vowels.begin(), vowels.end(), chr) != vowels.end()) numVowels++;
        }
        return numVowels;
    }
    string reverseStr(string str){
        string reversed;
        for (int i = str.length() - 1; i >= 0; i--) reversed += str[i];
        return reversed;
    }
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, ans;
        ss >> word;
        ans += word;
        int numVowels = findNumVowels(word);
        while (ss >> word){
            ans += ' ';
            if (findNumVowels(word) == numVowels) ans += reverseStr(word);
            else ans += word;
        }
        return ans;
    }
};