class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0, numBits = bits.size();
        while (i < numBits - 1) i += bits[i] + 1;
        return i == numBits - 1;
    }
};