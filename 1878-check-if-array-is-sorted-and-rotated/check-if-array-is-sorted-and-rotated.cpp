class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int size = nums.size(), first = sorted[0], startIdx;
        for (int i = 0; i < size; i++){
            if (nums[i] == first){
                startIdx = i;
                for (int j = 0; j < size; j++){  
                    if (sorted[j] != nums[(j + startIdx) % size]) break;
                    if (j == size - 1) return true;
                }
            }
        }
        return false;
    }
};