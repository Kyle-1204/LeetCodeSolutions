class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if (left == 1) left++;
        int prevVal = 0, minDiff = INT_MAX;
        vector<int> ans = {-1, -1};
        for (int n = left; n <= right; n++){
            if (isPrime(n)){
                if (prevVal){
                    if (n - prevVal < minDiff){
                        ans = {prevVal, n};
                        minDiff = n - prevVal;
                    }
                }
                prevVal = n;
            }
        }
        return ans;
    }
private:
    bool isPrime(int number){
        if (number != 2){
            if (number % 2 == 0) {
                return false;
            }
            for(int i=3; (i*i) <= number; i+=2){
                if(number % i == 0 ){
                    return false;
                }
            }
        }
        return true;
    }
};