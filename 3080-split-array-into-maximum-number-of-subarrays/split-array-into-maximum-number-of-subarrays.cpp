class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int minAnd = nums[0], size = nums.size(), index = 0, numGroups = 0, cumulative = 0;
        for (int i = 1; i < size; i++) minAnd &= nums[i];
        while (index < size){
            int currAnd = nums[index++];
            while (index < size && currAnd > minAnd){
                currAnd &= nums[index];
                index++;
            }
            cumulative += currAnd;
            if (cumulative <= minAnd) numGroups++;
        }
        return numGroups;
    }
};