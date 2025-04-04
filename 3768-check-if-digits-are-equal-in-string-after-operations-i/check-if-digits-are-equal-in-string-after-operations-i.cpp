class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.length() != 2){
            string str;
            for (int i = 1; i < s.length(); i++) str += ((s[i-1] - '0' + (s[i] - '0')) % 10) + '0';
            s = str;
        }
        return s[0] == s[1];
    }
};