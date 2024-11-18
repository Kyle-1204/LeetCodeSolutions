class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (auto& num: nums){
            mp[num]++;
            if (mp[num] == 2) ans ^= num;
        }
        return ans;
    }
};