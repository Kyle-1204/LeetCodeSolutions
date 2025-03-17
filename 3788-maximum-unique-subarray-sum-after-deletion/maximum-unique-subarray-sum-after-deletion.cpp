class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> vals;
        int sum = 0;
        for (auto& num: nums){
            if (num > 0 && vals.find(num) == vals.end()){
                sum += num;
                vals.insert(num);
            }
        }
        return (sum != 0 ? sum : *max_element(nums.begin(), nums.end()));
    }
};