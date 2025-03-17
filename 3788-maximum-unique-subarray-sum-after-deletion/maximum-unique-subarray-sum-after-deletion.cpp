class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum = 0, maxVal = *max_element(nums.begin(), nums.end());
        if (maxVal <= 0) return maxVal;
        unordered_set<int> vals;
        for (auto& num: nums){
            if (num > 0 && vals.find(num) == vals.end()){
                sum += num;
                vals.insert(num);
            }
        }
        return sum;
    }
};