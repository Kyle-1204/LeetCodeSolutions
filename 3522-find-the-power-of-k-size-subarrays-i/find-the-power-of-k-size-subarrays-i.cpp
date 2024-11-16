class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if (k == 1) return nums;
        int size = nums.size() - k, index = 0;
        bool inOrder = false;
        vector<int> powers(size + 1);
        while (index <= size){
            if (inOrder){
                if (nums[index + k - 1] == nums[index + k - 2] + 1) powers[index] = nums[index + k - 1];
                else {
                    powers[index] = -1;
                    inOrder = false;
                }
            }
            else{
                //cout << endl;
                for (int i = index; i < index + k - 1; i++){
                    //cout << nums[i] << "  vs  " << nums[i+1] << endl;
                    if (nums[i + 1] != nums[i] + 1) {
                        powers[index] = -1;
                        break;
                    }
                }
                if (powers[index] != -1){
                    powers[index] = nums[index + k - 1];
                    inOrder = true;
                }
            }
            index++;
        }
        return powers;
    }
};