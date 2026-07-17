class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> digits(10);
        unordered_map<int, int> mp;
        while (n){
            digits[n % 10]++;
            n /= 10;
        }
        int score = 0;
        for (int i = 1; i < digits.size(); i++) score += i * digits[i];
        return score;
    }
};