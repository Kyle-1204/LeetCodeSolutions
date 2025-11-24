class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, pow = 1;
        int sum = 0;
        while (n){
            int remainder = n % 10;
            if (remainder){
                x += (remainder * pow);
                pow *= 10;
                sum += remainder;
            }
            n /= 10;
        }
        return x * sum;
    }
};