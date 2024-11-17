class Solution {
public:
    int maxOperations(string s) {
        int len = s.length() - 1, numOnes = 0, numOpps = 0;
        for (int i = 0; i < len; i++){
            if (s[i] == '1'){
                numOnes++;
                if (s[i+1] == '0') numOpps += numOnes;
            }
        }
        return numOpps;
    }
};