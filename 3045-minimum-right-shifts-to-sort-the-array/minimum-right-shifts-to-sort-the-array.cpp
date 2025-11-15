class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int start = 0, size = nums.size(), index = 1, prevNum = nums[0], numShifts = 0;
        if (size == 1) return 0;
        while (numShifts < size){
            if (nums[(start + index) % size] > prevNum){
                prevNum = nums[(start + index) % size];
                index++;
                if (index == size) return numShifts;
            }
            else{
                numShifts++;
                start = size - numShifts;
                index = 1;
                prevNum = nums[start];
            }
        }
        return -1;
    }
};