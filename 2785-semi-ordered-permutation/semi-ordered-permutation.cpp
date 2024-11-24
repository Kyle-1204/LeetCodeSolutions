class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        bool firstValFound = false;
        int firstVal, n = nums.size();
        for (int i = 0; i < n; i++){
            if (nums[i] == 1){
                if (firstValFound) return firstVal + i;
                firstVal = i;
                firstValFound = true;
            }
            else if (nums[i] == n){
                if (firstValFound) return firstVal + n - i - 1;
                firstVal = n - i - 2;
                firstValFound = true;
            }
        }
        return 0;
    }
};