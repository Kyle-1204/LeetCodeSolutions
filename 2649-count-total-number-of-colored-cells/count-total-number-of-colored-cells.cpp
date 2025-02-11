class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 1;
        int addend = 4;
        while (--n) {
            ans += addend;
            addend += 4;
        }
        return ans;
    }
};