class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int left = 0, right = nums.size() - 1;
        while (left < right) ans += stoll(to_string(nums[left++]) + to_string(nums[right--]));
        return (left == right ? ans + nums[right] : ans);
    }
};