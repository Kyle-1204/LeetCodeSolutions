class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> ans, seen;
        int size = nums.size(), numInARow = 1;
        for (int i = 0; i < size; i++){
            if (nums[i] == -1){
                int seenSize = seen.size();
                if (numInARow > seenSize) ans.push_back(-1);
                else (ans.push_back(seen[seenSize - numInARow]));
                numInARow++;
            }
            else {
                seen.push_back(nums[i]);
                numInARow = 1;
            }
        }
        return ans;
    }
};