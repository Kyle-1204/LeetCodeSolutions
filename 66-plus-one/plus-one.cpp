class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int currDigit = digits.size() - 1;
        digits[currDigit]++;
        while (digits[currDigit] == 10){
            digits[currDigit] = 0;
            currDigit--;
            if (currDigit == -1) break;
            digits[currDigit]++;
        }
        if (digits[0] == 0) digits.insert(digits.begin(), 1);
        return digits;
    }
};