class Solution {
public:
    int maxScore(string s) {
        int numOnes = count(s.begin(), s.end(), '1'), numZeros = 0, maxVal = 0, len = s.length() - 1;
        for (int i = 0; i < len; i++){
            if (s[i] == '0') numZeros++;
            else numOnes--;
            maxVal = max(numZeros + numOnes, maxVal);
        }
        return maxVal;
    }
};