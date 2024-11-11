class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        if (*max_element(nums.begin(), nums.end()) >= k) return 1;
        int minLength = INT_MAX, left = 0, right = 1, size = nums.size(), currNum = nums[0];
        while (right < size){
            currNum |= nums[right];
            if (currNum >= k){
                minLength = min(minLength, right - left + 1);
                left++;
                currNum = nums[left];
                right = left;
            }
            right++;
        }
        return (minLength == INT_MAX ? -1 : minLength);
    }
};