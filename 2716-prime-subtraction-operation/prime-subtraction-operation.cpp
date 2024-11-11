class Solution {
private:
    int smallestPrime(int n){
        while (!isPrime(n)) n++;
        return n;
    }
    bool isPrime(int n){
        if (n < 2) return false;
        for (int i = 2; i < n; i++){
            if (n % i == 0) return false;
        }
        return true;
    }
public:
    bool primeSubOperation(vector<int>& nums) {
        int size = nums.size() - 1; int currNum = nums[size];
        for (int i = size - 1; i >= 0; i--){
            if (nums[i] >= currNum){
                nums[i] -= smallestPrime(nums[i] - currNum + 1);
                if (nums[i] <= 0) return false;
            }
            currNum = nums[i];
        }
        return true;
    }
};