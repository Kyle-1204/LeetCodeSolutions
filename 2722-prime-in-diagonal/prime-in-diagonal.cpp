class Solution {
private:
    bool isPrime(int n){
        if (n == 1) return false;
        for (int i = 2; i*i <= n; i++){
            if (!(n % i)) return false;
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int largestPrime = 0, size = nums.size();
        for (int i = 0; i < size; i++){
            int num1 = nums[i][i], num2 = nums[i][size - 1 - i];
            if (isPrime(num1)) largestPrime = max(num1, largestPrime);
            if (isPrime(num2)) largestPrime = max(num2, largestPrime);
        }
        return largestPrime;
    }
};