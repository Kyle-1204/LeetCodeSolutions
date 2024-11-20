class Solution {
public:
    bool isPowerOfFour(int n) {
        long long val = 1;
        while (val < n) val *= 4;
        return (val == n);
    }
};