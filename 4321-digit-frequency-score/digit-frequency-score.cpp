class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mp;
        while (n){
            mp[n % 10]++;
            n /= 10;
        }
        int score = 0;
        for (auto& val: mp) score += val.first * val.second;
        return score;
    }
};