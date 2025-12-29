class Solution {
public:
    int mirrorDistance(int n) {
        int reversedN = 0, num = n;
        while (num){
            reversedN += num % 10;
            num /= 10;
            if (num) reversedN *= 10;
        }
        return abs(n - reversedN);
    }
};