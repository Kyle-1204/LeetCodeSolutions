class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxRange = 0;
        for (auto& num: nums){
            int maxDigit = 0, minDigit = 9, n = num;
            while (n){
                int digit = n % 10;
                maxDigit = max(digit, maxDigit);
                minDigit = min(digit, minDigit);
                n /= 10;
            }
            int range = maxDigit - minDigit;
            maxRange = max(maxRange, range);
            mp[range] += num;
        }
        return mp[maxRange];
    }
};