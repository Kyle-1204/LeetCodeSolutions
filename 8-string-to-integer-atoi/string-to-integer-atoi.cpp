class Solution {
public:
    int myAtoi(string s) {
        int i = 0, len = s.length(), sign = 1;
        long num = 0;
        while (s[i] == ' ') i++;
        if (s[i] == '-'){
            sign *= -1;
            i++;
        }
        else if (s[i] == '+') i++;
        while (i < len && (isdigit(s[i]))){
            num *= 10;
            num += (s[i] - '0');
            if (num > INT_MAX) return (sign == 1 ? INT_MAX : INT_MIN);
            i++;
        }
        num *= sign;
        return (int) num;
    }
};