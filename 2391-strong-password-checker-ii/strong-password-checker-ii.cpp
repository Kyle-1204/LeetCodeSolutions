class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len = password.length();
        if (len < 8) return false;
        char prevChar = ' ';
        bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
        for (int i = 0; i < len; i++){
            char chr = password[i];
            if (chr == prevChar) return false;
            prevChar = chr;
            if (islower(chr)) hasLower = true;
            else if (isupper(chr)) hasUpper = true;
            else if (isdigit(chr)) hasDigit = true;
            else hasSpecial = true;
        }
        return (hasLower && hasUpper && hasDigit && hasSpecial);
    }
};