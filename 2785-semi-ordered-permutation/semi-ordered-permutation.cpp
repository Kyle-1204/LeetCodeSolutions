class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        bool firstValFound = false;
        int first = INT_MAX, last = INT_MAX, n = nums.size();
        for (int i = 0; i < n; i++){
            if (nums[i] == 1){
                first = i;
                if (firstValFound) return first + last;
                firstValFound = true;
            }
            if (nums[i] == n){
                last = n - i - 1;
                if (firstValFound) return first + last;
                last--;
                firstValFound = true;
            }
        }
        return 0;
    }
};