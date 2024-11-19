class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum = 0, maxSum = 0;
        for (int i = 0; i < k; i++){
            int num = nums[i];
            sum += num;
            mp[num]++;
        }
        if (mp.size() == k) maxSum = max(maxSum, sum);
        int left = k, size = nums.size();
        while (left < size){
            int numRemoved = nums[left - k], numAdded = nums[left];
            sum += numAdded - numRemoved;
            mp[numRemoved]--;
            if (mp[numRemoved] == 0) mp.erase(numRemoved);
            mp[numAdded]++;
            if (mp.size() == k) maxSum = max(maxSum, sum);
            left++;
        }
        return maxSum;
    }
};