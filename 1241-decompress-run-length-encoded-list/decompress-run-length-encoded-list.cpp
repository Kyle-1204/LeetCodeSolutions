class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for (int i = 1; i < size; i += 2){
            int val = nums[i], freq = nums[i-1];
            for (int i = 0; i < freq; i++) ans.push_back(val);
        }
        return ans;
    }
};