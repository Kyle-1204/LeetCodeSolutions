class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int len = s.length(), maxLen = 0;
        for (int left = 0; left < len; left++){
            if (s[left] == '0'){
                int right = left + 1, numZeroes = 1, numOnes = 0;
                while (right < len && s[right] == '0'){
                    numZeroes++;
                    right++;
                }
                if (numZeroes * 2 > maxLen){
                    while (right < len && s[right] == '1'){
                        numOnes++;
                        if (numOnes == numZeroes) {
                            maxLen = max(maxLen, numOnes * 2);
                            break;
                        }
                        right++;
                    }
                }
            }
        }
        return maxLen;
    }
};