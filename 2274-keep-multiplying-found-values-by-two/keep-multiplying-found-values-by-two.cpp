class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> mp;
        for (auto& num: nums){
            mp.insert(num);
            while (mp.find(original) != mp.end()) original *= 2;
        }
        return original;
    }
};