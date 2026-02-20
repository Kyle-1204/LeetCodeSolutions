class Solution {
public:
    string reverseByType(string s) {
        string letters = "", symbols = "";
        for (auto& chr: s){
            if (isalpha(chr)) letters += chr;
            else symbols += chr;
        }
        int letterIndex = letters.length() - 1, symbolIndex = symbols.length() - 1;
        for (auto& chr: s){
            if (isalpha(chr)) chr = letters[letterIndex--];
            else chr = symbols[symbolIndex--];
        }
        return s;
    }
};