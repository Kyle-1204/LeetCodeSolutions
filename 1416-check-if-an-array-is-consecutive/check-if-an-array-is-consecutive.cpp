class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        int x = *min_element(nums.begin(), nums.end()), n = nums.size();
        vector<int> vals(n);
        for (int i = 0; i < n; i++){
            int num = nums[i];
            if (num >= x && num <= x + n - 1 && vals[num - x] == 0) vals[num - x] = 1;
        }
        cout << accumulate(vals.begin(), vals.end(), 0) << endl;
        return accumulate(vals.begin(), vals.end(), 0) == n;
    }
};