class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            generateSubSets(nums, i, nums[i]);
        }
        return sum;
    }
private:
    int sum = 0;
    void generateSubSets(vector<int>& nums, int index, int val){
        sum += val;
        for (int i = index + 1; i < nums.size(); i++){
            generateSubSets(nums, i, nums[i] ^ val);
        }
    }
};