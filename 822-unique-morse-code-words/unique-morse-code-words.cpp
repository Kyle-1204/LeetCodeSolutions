class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseChars = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> mp;
        for (auto& word: words){
            string currWord = "";
            for (auto& chr: word) currWord += morseChars[chr - 'a'];
            mp[currWord]++;
        }
        return mp.size();
    }
};