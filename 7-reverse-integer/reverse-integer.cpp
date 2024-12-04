class Solution {
public:
    int reverse(int x) {
        long num = 0;
        string str = to_string(x);
        int start = str.length() - 1, end, sign;
        if (str[0] == '-'){
            sign = -1;
            end = 0;
        }
        else{
            sign = 1;
            end = -1;
        }
        while (start > 0 && str[start] == '0') start--;
        for (int i = start; i > end; i--){
            num *= 10;
            num += str[i] - '0';
        }
        if (num > INT_MAX) return 0;
        num *= sign;
        return (int) num;
    }
};