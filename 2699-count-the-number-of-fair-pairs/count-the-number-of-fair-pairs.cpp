class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long numPairs = 0;
        int size = nums.size() - 1,  start = 0, left = 1;
        sort(nums.begin(), nums.end());
        int currNum = nums[0];
        while (start < size && currNum + nums[start + 1] < lower) start++;
        int right = start;
        while (right < size && currNum + nums[right+1] <= upper) right++;
        numPairs += (right - start);
        while (left < right){
            start = max(left+1, start);
            currNum = nums[left];
            while (start > left && currNum + nums[start] >= lower) start--;
            while (right > left && currNum + nums[right] > upper) right--;
            numPairs += (right - start);
            left++;
        }
        return numPairs;
    }
};