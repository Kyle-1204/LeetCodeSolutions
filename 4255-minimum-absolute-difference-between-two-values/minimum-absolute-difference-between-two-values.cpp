class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int minOne = INT_MAX, minTwo = INT_MAX, minDiff = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 1){
                if (minTwo != INT_MAX) minDiff = min(minDiff, abs(minTwo - i));
                minOne = i;
            }
            else if (nums[i] == 2){
                if (minOne != INT_MAX) minDiff = min(minDiff, abs(minOne - i));
                minTwo = i;
            }
        }
        return (minDiff == INT_MAX ? -1 : minDiff);
    }
};