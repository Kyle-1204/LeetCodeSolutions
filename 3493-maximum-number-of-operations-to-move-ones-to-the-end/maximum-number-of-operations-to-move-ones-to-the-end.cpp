class Solution {
public:
    int maxOperations(string s) {
        int numOnes = 0, ans = 0;
        bool lastNumOne = true;
        for (auto& chr: s){
            if (chr == '1') {
                numOnes++;
                lastNumOne = true;
            }
            else if (lastNumOne){
                lastNumOne = false;
                ans += numOnes;
            }
        }
        return ans;
    }
};