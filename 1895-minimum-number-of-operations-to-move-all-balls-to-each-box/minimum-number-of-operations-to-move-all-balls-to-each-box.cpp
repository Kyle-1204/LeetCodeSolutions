class Solution {
public:
    vector<int> minOperations(string boxes) {
        int len = boxes.length();
        vector<int> opps(len);
        for (int i = 0; i < len; i++){
            if (boxes[i] == '1'){
                for (int j = 0; j < len; j++){
                    opps[j] += abs(i - j);
                }
            }
        }
        return opps;
    }
};