class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixSum = nums[0], size = nums.size(), index = 1;
        if (size == 1) return prefixSum + 1;
        unordered_map<int, int> mp;
        mp[prefixSum]++;
        while (index < size && nums[index] == nums[index-1] + 1){
            prefixSum += nums[index];
            index++;
        }
        while (index < size){
            mp[nums[index]]++;
            while (mp.find(prefixSum) != mp.end()) prefixSum++;
            index++;
        }
        return prefixSum;
    }
};