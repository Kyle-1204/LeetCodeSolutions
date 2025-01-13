class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res;
        bool oddFound = false;
        for (char chr: s){
            if (chr == '0') res += '0';
            else if (oddFound) res = '1' + res;
            else oddFound = true;
        }
        return (oddFound ? res + '1' : res);
    }
};