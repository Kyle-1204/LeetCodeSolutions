class Solution {
public:
    long long removeZeros(long long n) {
        long long ans = 0, pow = 1;
        while (n){
            if (n % 10){
                ans += (n % 10) * pow;
                pow *= 10;
            }
            n /= 10;
        }
        return ans;
    }
};