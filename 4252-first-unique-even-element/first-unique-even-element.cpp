class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& num: nums){
            if (num % 2 == 0) mp[num]++;
        }
        for (auto& num: nums){
            if (mp[num] == 1) return num;
        }
        return -1;
    }
};