class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_set<int> numSet;
        map<int, int> mp;
        int len = nums.size();
        for (int i = 0; i < len; i++){
            for (auto& num: nums[i]){
                if (numSet.find(num) == numSet.end()){
                    mp[num]++;
                    numSet.insert(num);
                }
            }
            numSet.clear();
        }
        vector<int> ans;
        for (auto& val: mp){
            if (val.second == len) ans.push_back(val.first);
        }
        return ans;
    }
};