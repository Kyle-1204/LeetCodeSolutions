class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mp;
        int minFreq = INT_MAX, ans = 0;
        while (n){
            mp[n % 10]++;
            n /= 10;
        }
        for (auto& val: mp){
            if (val.second < minFreq){
                minFreq = val.second;
                ans = val.first;
            }
            else if (val.second == minFreq && val.first < ans) ans = val.first;
        }
        return ans;
    }
};