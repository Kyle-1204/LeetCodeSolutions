class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.length() > 2){
            string newStr;
            for (int i = 0; i < s.length() - 1; i++){
                newStr += to_string(((int) s[i] + (int) s[i + 1]) % 10);
            }
            s = newStr;
        }
        return s[0] == s[1];
    }
};