class Solution {
public:
    int minimumSum(int n, int k) {
        int minSum = 0, currVal = 1, half = k/2 + 1;
        while (n && currVal < half) {
            minSum += currVal++;
            n--;
        }
        while (n--) minSum += k++;
        return minSum;
    }
};