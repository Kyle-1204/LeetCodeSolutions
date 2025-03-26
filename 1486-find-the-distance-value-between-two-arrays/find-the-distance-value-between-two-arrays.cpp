class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distVal = 0;
        for (auto& first: arr1){
            bool isDistanced = true;
            for (auto& second: arr2){
                if (abs(first - second) <= d){
                    isDistanced = false;
                    break;
                }
            }
            if (isDistanced) distVal++;
        }
        return distVal;
    }
};