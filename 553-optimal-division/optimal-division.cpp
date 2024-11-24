class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        int size = nums.size() - 1;
        if (!size) return to_string(nums[0]);
        if (size == 1) return to_string(nums[0]) + '/' + to_string(nums[1]);
        string str = to_string(nums[0]) + "/(";
        for (int i = 1; i < size; i++) str += to_string(nums[i]) + '/';
        return str + to_string(nums[size]) + ')';
    }
};