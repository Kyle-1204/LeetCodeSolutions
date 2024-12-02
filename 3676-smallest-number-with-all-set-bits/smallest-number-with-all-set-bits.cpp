class Solution {
public:
    int smallestNumber(int n) {
        int ans = n, exp = 0;
        while (n){
            if (n % 2 == 0) ans += pow(2, exp);
            n /= 2;
            exp++;
        }
        return ans;
    }
};