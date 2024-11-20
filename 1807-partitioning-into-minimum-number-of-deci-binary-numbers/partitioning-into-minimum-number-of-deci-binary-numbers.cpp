class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;
        for (auto& digit: n) maxDigit = max(maxDigit, digit - '0');
        return maxDigit;
    }
};