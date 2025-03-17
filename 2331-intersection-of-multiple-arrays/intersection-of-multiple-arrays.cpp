class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> mp;
        int len = nums.size() - 1;
        for (int i = 0; i < len; i++){
            for (auto& num: nums[i]) mp[num]++;
        }
        vector<int> ans;
        for (auto& num: nums[len]){
            if (mp[num] == len) ans.push_back(num);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};