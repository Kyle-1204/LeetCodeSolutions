class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        unordered_map<char, long long> mp;
        long long sumCost = 0, maxCost = 0;
        for (int i = 0; i < cost.size(); i++){
            mp[s[i]] += cost[i];
            sumCost += cost[i];
            maxCost = max(mp[s[i]], maxCost);
        }
        return sumCost - maxCost;
    }
};