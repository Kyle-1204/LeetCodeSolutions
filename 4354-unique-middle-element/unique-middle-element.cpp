class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int middle = nums[nums.size()/2];
        bool middleFound = false;
        for (auto& num : nums){
            if (num == middle){
                if (middleFound == true) return false;
                middleFound = true;
            }
        }
        return true;
    }
};