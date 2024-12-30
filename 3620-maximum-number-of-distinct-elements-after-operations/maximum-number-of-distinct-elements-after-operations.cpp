class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        unordered_set<int> mins, maxes;
        sort(nums.begin(), nums.end());
        int size = nums.size(), prevMin = INT_MIN, prevMax = INT_MAX;
        for (int i = 0; i < size; i++){
            if (mins.find(nums[i] + k) == maxes.end()) {
                prevMin = max(prevMin + 1, nums[i] - k);
                mins.insert(prevMin);
            }
            if (maxes.find(nums[size - i - 1] - k) == maxes.end()){
                prevMax = min(prevMax - 1, nums[size - i - 1] + k);
                maxes.insert(prevMax);
            }
        }
        return max(mins.size(), maxes.size());
    }
};