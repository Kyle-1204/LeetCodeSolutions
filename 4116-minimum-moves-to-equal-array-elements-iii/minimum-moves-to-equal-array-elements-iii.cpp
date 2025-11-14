class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(), nums.end()), ans = 0;
        for (auto& num: nums) ans += (maxElement - num);
        return ans;
    }
};