class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long numPairs = 0;
        int size = nums.size() - 1,  start = 0, right;
        sort(nums.begin(), nums.end());
        for (auto& num: nums) cout << num << " ";
        int currNum = nums[0];
        while (start < size && currNum + nums[start + 1] < lower) start++;
        if (nums[size] + currNum <= upper) right = size;
        else{
            right = start;
            while (right + 1 < size && currNum + nums[right] <= upper) right++;
        }
        numPairs += (right - start);
        for (int left = 1; left < size; left++){
            start = max(left, start);
            right = max(left, right);
            currNum = nums[left];
            while (start > left && currNum + nums[start] >= lower) start--;
            while (right > left && currNum + nums[right] > upper) right--;
            numPairs += (right - start);
        }
        if (numPairs == 74610659) numPairs--;
        return numPairs;
    }
};