class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        // Find the majority element 
        int majorityNum = nums[0], count = 0, majorityCount = 0, m = nums.size();
        for (auto& num: nums){
            if (num == majorityNum) count++;
            else count--;
            if (count == 0) { 
                majorityNum = num; 
                count = 1; 
            }
        }
        
        // Count frequency of majority element
        for (auto& num: nums) {
            if (num == majorityNum)  majorityCount++;
        }

        // Check if valid split is possible
        count = 0;
        for(int index = 0; index < nums.size(); index++){
            if (nums[index] == majorityNum) count++;
            if (count * 2 > index + 1  && (majorityCount - count) * 2 > (m - index - 1)) return index;
        }
        return -1;
    }
};