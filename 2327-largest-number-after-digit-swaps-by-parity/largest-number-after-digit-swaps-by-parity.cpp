class Solution {
public:
    int largestInteger(int num) {
        int oddIndex = 0, evenIndex = 0;
        vector<int> odds, evens, pattern;
        while (num){
            int digit = num % 10;
            if (digit % 2) {
                odds.push_back(digit);
                pattern.push_back(1);
            }
            else {
                evens.push_back(digit);
                pattern.push_back(0);
            }
            num /= 10;
        }
        sort(odds.begin(), odds.end(), greater<>());
        sort(evens.begin(), evens.end(), greater<>());
        for (int i = pattern.size() - 1; i >= 0; i--){
            num *= 10;
            if (pattern[i]) num += odds[oddIndex++];
            else num += evens[evenIndex++];
        }
        return num;
    }
};