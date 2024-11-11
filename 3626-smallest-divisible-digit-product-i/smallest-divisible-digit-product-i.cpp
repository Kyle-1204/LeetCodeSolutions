class Solution {
private:
    int digitProduct(int n){
        int prod = 1;
        while (n){
            prod *= (n % 10);
            n /= 10;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        while (digitProduct(n) % t) n++;
        return n;
    }
};