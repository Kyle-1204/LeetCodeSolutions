class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        //iterate through indexes 0 to n - 1
        for (int i = 0; i < nums.size() - 1; i++){

            //compare the parities of the current and next element
            if ((nums[i] & 1) ^ (nums[i+1] & 1) == 0) {

                //if the two adjacent elements have the same parity, return false
                return false;
            }
        }

        //return true if no pair of adjacent elements with the same parity are found
        return true;
    }
};