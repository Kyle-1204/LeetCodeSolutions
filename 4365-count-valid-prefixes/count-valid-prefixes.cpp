class Solution {
public:
    int countValidPrefixes(string s) {
        int numOnes = 0, numZeroes = 0, ans = 0;
        for (auto& chr: s){
            if (chr == '0') numZeroes++;
            else numOnes++;
            if (abs(numZeroes - numOnes) <= 1) ans++;
        }
        return ans;
    }
};