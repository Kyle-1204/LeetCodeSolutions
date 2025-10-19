class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = k, mult = 1;
        unordered_set<int> numSet;
        for (auto& num: nums){
            numSet.insert(num);
            while (numSet.find(k * mult) != numSet.end()){
                mult++;
                ans += k;
            }
        }
        return ans;
    }
};