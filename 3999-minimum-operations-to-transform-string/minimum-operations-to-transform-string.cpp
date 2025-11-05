class Solution {
public:
    int minOperations(string s) {
        int minOpps = 0;
        for (auto& chr: s){
            if (chr != 'a') minOpps = max(minOpps, 'z' - chr + 1);
        }
        return minOpps;
    }
};