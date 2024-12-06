class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(), banned.end());
        //for (auto& val: banned) cout << val << " ";
        int bIndex = 0, currNum = 1, maxInts = 0, currSum = 0, size = banned.size();
        while (currNum <= n && currSum + currNum <= maxSum){
            if (bIndex >= size || currNum != banned[bIndex]){
                currSum += currNum;
                maxInts++;
            }
            while (bIndex < size && currNum == banned[bIndex]) bIndex++;
            currNum++;
        }
        return maxInts;
    }
};