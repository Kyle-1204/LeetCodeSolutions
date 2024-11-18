class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int minVal = INT_MAX;
        unordered_map<int, int> mp;
        for (auto& num1: nums1) mp[num1]++;
        for (auto& num2: nums2){
            if (mp.find(num2) != mp.end()) minVal = min(minVal, num2);
        }
        return (minVal == INT_MAX ? -1 : minVal);
    }
};