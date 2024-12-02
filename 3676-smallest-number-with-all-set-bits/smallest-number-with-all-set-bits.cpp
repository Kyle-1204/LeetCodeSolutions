class Solution {
public:
    int smallestNumber(int n) {
        int ans = n, pow = 1;
        while (n){
            if (n % 2 == 0) ans += pow;
            n /= 2;
            pow *= 2;
        }
        return ans;
    }
};