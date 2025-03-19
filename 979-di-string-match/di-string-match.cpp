class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len = s.length(), iVal = 0, dVal = len;
        vector<int> digits(len + 1);
        for (int i = 0; i < len; i++){
            if (s[i] == 'I') digits[i] = iVal++;
            else digits[i] = dVal--;
        }
        digits[len] = iVal;
        return digits;
    }
};