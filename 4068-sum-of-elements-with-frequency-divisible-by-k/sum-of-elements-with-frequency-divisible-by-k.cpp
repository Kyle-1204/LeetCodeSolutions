class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        for (auto& num: nums) mp[num]++;
        for (auto& val: mp){
            if (val.second % k == 0) sum += (val.first * val.second);
        }
        return sum;
    }
};