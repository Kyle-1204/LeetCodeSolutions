class Solution {
public:
    int xorOperation(int n, int start) {
        int xOr = start;
        for (int i = 1; i < n; i++){
            start += 2;
            xOr ^= start;
        }
        return xOr;
    }
};