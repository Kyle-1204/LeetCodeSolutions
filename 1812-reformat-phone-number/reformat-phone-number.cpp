class Solution {
public:
    string reformatNumber(string number) {
        string digits, ans;
        for (auto& chr: number) {
            if (isdigit(chr)) digits += chr;
        }
        while (true){
            if (digits.length() > 4){
                ans += digits.substr(0, 3) + '-';
                digits = digits.substr(3);
            }
            else if (digits.length() == 4){
                return ans + digits.substr(0, 2) + '-' + digits.substr(2);
            }
            else return ans + digits;
        }
        return ans;
    }
};