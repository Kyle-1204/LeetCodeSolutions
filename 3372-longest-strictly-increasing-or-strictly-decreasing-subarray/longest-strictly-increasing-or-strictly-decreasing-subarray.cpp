class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int left = 0, size = nums.size(), maxVal = 1;
        for(int left = 0; left < size; left++){
            int incStart = nums[left], decStart = nums[left];
            int checkInc = left + 1, checkDec = checkInc;
            while (checkInc < size && nums[checkInc] > incStart){
                incStart = nums[checkInc];
                checkInc++;
            }
            while (checkDec < size && nums[checkDec] < decStart){
                decStart = nums[checkDec];
                checkDec++;
            }
            maxVal = max(max(checkDec, checkInc) - left, maxVal);
            if (maxVal > size - left) return maxVal;
        }
        return maxVal;
    }
};