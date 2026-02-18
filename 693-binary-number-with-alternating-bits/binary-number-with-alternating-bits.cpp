class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prevBit = -1;
        while (n){
            if (n % 2 == prevBit) return false;
            prevBit = n % 2;
            n /= 2;
        }
        return true;
    }
};