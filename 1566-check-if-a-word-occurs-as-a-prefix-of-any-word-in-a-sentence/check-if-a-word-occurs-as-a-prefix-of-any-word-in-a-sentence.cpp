class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int count = 1, len = searchWord.length();
        while (ss >> word){
            bool wordFound = true;
            for (int i = 0; i < len; i++){
                if (word[i] != searchWord[i]) {
                    wordFound = false;
                    break;
                }
            }
            if (wordFound) return count;
            count++;
        }
        return -1;
    }
};