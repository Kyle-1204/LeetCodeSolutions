class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int size = nums.size(), add = (size % 2 ? size/2 + 1 : size/2), left = 0, right = size - 1;
        long long ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size; i++){
            long long currNum;
            if (abs(nums[left]) > abs(nums[right])) {
                currNum = pow(nums[left], 2);
                left++;
            }
            else {
                currNum = pow(nums[right], 2);
                right--;
            }
            if (add) {
                ans += currNum;
                add--;
            }
            else ans -= currNum;
        }
        return ans;
    }
};