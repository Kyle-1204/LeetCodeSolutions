class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool isFirst = true;
        int first = 0, second = 0;
        for (int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if (num % 2) isFirst = !isFirst;
            if (i % 6 == 5) isFirst = !isFirst;
            if (isFirst) first += num;
            else second += num;
        }
        return first - second;
    }
};