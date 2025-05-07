class Solution {
public:
    int maxProduct(int n) {
        int first = 0, second = 0;
        while (n){
            int digit = n % 10;
            if (digit > first){
                second = first;
                first = digit;
            }
            else if (digit > second) second = digit;
            n /= 10;
        }
        return first * second;
    }
};