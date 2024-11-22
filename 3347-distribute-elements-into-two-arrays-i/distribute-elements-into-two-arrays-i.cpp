class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int size = nums.size(), lastVal1 = nums[0], lastVal2 = nums[1];
        vector<int> arr1 = {lastVal1}, arr2 = {lastVal2};
        for (int i = 2; i < size; i++){
            int num = nums[i];
            if (lastVal1 > lastVal2){
                arr1.push_back(num);
                lastVal1 = num;
            } 
            else{
                arr2.push_back(num);
                lastVal2 = num;
            }
        }
        int size1 = arr1.size();
        for (int j = 0; j < size1; j++) nums[j] = arr1[j];
        for (int k = size1; k < size; k++) nums[k] = arr2[k - size1];
        return nums;
    }
};