class Solution {
public:
    bool consecutiveSetBits(int n) {
        bool onePair = false;
        int prevBit = -1;
        while (n){
            if (n % 2 == 1 && prevBit == 1){
                if (!onePair) onePair = true;
                else return false;
            }
            prevBit = n % 2;
            n /= 2;
        }
        return onePair;
    }
};