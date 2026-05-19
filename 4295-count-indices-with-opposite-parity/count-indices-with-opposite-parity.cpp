class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int numEvens = 0, numOdds = 0;
        for (int i = nums.size() - 1; i >= 0; i--){
            if (nums[i] % 2) {
                numOdds++;
                nums[i] = numEvens;
            }
            else{
                numEvens++;
                nums[i] = numOdds;
            }
        }
        return nums;
    }
};