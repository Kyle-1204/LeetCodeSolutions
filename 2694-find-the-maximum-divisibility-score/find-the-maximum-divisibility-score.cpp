class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxScore = 0, ans = INT_MAX;
        for (auto& divisor: divisors){
            int currScore = 0;
            for (auto& num: nums){
                if (num % divisor == 0) currScore++;
            }
            if (currScore > maxScore){
                maxScore = currScore;
                ans = divisor;
            }
            else if (currScore == maxScore && ans > divisor) ans = divisor;
        }
        return ans;
    }
};