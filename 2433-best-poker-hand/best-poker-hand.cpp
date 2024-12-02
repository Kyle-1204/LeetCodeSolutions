class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        set<char> s(suits.begin(), suits.end());
        if (s.size() == 1) return "Flush";
        int maxFreq = 1;
        unordered_map<int, int> mp;
        for (auto& rank: ranks){
            mp[rank]++;
            maxFreq = max(maxFreq, mp[rank]);
            if (maxFreq == 3) return "Three of a Kind";
        }
        return (maxFreq == 2 ? "Pair" : "High Card");
    }
};