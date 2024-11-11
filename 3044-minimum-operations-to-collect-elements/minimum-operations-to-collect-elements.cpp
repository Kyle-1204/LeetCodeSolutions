class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> elements(k);
        int sum = 0, size = nums.size();
        for (int i = size - 1; i >= 0; i--){
            int currNum = nums[i] - 1;
            if (currNum <= k - 1 && elements[currNum] == 0){
                elements[currNum]++;
                sum++;
                if (sum == k) return size - i;
            }
        }
        return 0;
    }
};