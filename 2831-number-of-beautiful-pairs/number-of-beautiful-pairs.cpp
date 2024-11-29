class Solution {
private:
    int firstDigit(int n){
        while (n / 10) n /= 10;
        return n % 10;
    }
public:
    int countBeautifulPairs(vector<int>& nums) {
        int size = nums.size(), numPairs = 0;
        for (int i = 0; i < size - 1; i++){
            int num = nums[i];
            for (int j = i + 1; j < size; j++){
                if (gcd(firstDigit(num), nums[j] % 10) == 1) numPairs++;
            }
        }
        return numPairs;
    }
};