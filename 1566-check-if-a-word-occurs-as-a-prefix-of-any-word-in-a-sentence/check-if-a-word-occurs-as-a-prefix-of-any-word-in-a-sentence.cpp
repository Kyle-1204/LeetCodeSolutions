class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int count = 1, len = searchWord.length();
        while (ss >> word){
            for (int i = 0; i < len; i++){
                if (word[i] != searchWord[i]) break;
                if (i == len - 1) return count;
            }
            count++;
        }
        return -1;
    }
};