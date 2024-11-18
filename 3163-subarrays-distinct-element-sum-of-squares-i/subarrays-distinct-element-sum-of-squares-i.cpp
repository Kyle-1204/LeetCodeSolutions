class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_map<int, int> mp;
        int size = nums.size(), squareSum = 0;
        for (int left = 0; left < size; left++){
            mp[nums[left]]++;
            squareSum++;
            for (int right = left + 1; right < size; right++){
                mp[nums[right]]++;
                int mpSize = mp.size();
                squareSum += (mpSize * mpSize);
            }
            mp.clear();
        }
        return squareSum;
    }
};