class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int maxVal = -1;
        for (auto& num: nums){
            int currVal = num, sumOfDigits = 0;
            while(currVal){
                sumOfDigits += (currVal % 10);
                currVal /= 10;
            }
            if (mp[sumOfDigits].size() == 2){
                sort(mp[sumOfDigits].begin(), mp[sumOfDigits].end());
                mp[sumOfDigits][0] = max(num, mp[sumOfDigits][0]);
                maxVal = max(maxVal, mp[sumOfDigits][0] + mp[sumOfDigits][1]);
            }
            else{
                mp[sumOfDigits].push_back(num);
                if (mp[sumOfDigits].size() == 2) maxVal = max(maxVal, mp[sumOfDigits][0] + mp[sumOfDigits][1]);
            }
        }
        return maxVal;
    }
};