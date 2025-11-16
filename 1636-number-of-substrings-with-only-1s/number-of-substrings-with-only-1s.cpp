class Solution {
public:
    int numSub(string s) {
        long long ans = 0;
        int numOnes = 0, mod = 1000000007;
        for (auto& chr: s){
            if (chr == '1'){
                numOnes++;
                ans += numOnes;
            }
            else numOnes = 0;
        }
        return ans % mod;
    }
};