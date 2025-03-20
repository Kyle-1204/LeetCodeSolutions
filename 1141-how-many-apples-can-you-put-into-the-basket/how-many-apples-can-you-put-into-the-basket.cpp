class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        sort(weight.begin(), weight.end());
        int len = weight.size(), totalWeight = 0;
        for (int i = 0; i < len; i++){
            totalWeight += weight[i];
            if (totalWeight > 5000) return i;
        }
        return len;
    }
};