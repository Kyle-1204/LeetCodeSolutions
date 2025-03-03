class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> firstMap, secondMap;
        int m = nums.size();
        
        // Add all elements of nums to second half
        for(auto& num: nums){
            secondMap[num]++;
        }

        for(int index = 0; index < m; index++) {

            //Create split at current index
            int num = nums[index];
            secondMap[num]--;
            firstMap[num]++;
            
            // Check if valid split
            if (firstMap[num] * 2 > index + 1 && secondMap[num] * 2 > m - index - 1){
                return index;
            }
        }
        
        // No valid split exists
        return -1;
    }
};