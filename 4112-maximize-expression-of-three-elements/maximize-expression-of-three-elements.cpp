class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int c = INT_MAX, a = INT_MIN, b = INT_MIN;
        for (auto& num: nums){
            if (num >= a){
                b = a;
                a = num;
            }
            else if (num > b) b = num;
            if (num <= c) c = num;
        }
        return a + b - c;
    }
};