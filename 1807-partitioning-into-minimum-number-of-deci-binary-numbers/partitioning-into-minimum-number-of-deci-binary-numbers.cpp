class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for (auto& num: n) ans = max(num - '0', ans);
        return ans;
    }
};