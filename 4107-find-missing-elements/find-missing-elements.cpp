class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minNum = INT_MAX, maxNum = 0;
        unordered_set<int> numSet;
        for (auto& num: nums){
            numSet.insert(num);
            minNum = min(num, minNum);
            maxNum = max(num, maxNum);
        }
        vector<int> ans;
        for (int i = minNum + 1; i < maxNum; i++){
            if (numSet.find(i) == numSet.end()) ans.push_back(i);
        }
        return ans;
    }
};