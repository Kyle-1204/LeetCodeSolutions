class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> mp;
        unordered_set<int> numSet;
        for (auto& num: nums1){
            if (numSet.find(num) == numSet.end()){
                mp[num]++;
                numSet.insert(num);
            }
        }
        numSet.clear();
        for (auto& num: nums2){
            if (numSet.find(num) == numSet.end()){
                mp[num]++;
                numSet.insert(num);
            }
        }
        numSet.clear();
        for (auto& num: nums3){
            if (numSet.find(num) == numSet.end()){
                mp[num]++;
                numSet.insert(num);
            }
        }
        numSet.clear();
        vector<int> ans;
        for (auto& val: mp){
            if (val.second > 1) ans.push_back(val.first);
        }
        return ans;
    }
};