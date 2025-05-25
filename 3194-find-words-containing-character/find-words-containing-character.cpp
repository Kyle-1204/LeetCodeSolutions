class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> vect;
        for (int i = 0; i < words.size(); i++){
            string word = words[i];
            bool running = true;
            int charIndex = word.length() - 1;
            while (running){
                if (word[charIndex] == x){
                    running = false;
                    vect.push_back(i);
                }
                else if (charIndex == 0) running = false;
                charIndex--;
            }
        }
        return vect;
    }
};