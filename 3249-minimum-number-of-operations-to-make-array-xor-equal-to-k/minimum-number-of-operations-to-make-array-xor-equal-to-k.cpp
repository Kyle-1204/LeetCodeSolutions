class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int currXOr = 0, ans = 0;
        for (auto& num: nums) currXOr ^= num;
        while (k || currXOr){
            if (k % 2 != currXOr % 2) ans++;
            k /= 2;
            currXOr /= 2;
        }
        return ans;
    }
};