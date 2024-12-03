class Solution {
public:
    int countBinarySubstrings(string s) {
        int len = s.length(), count = 0;
        for (int left = 0; left < len; left++){
            char startChar = s[left], otherChar = (startChar == '0' ? '1' : '0');
            int numFirsts = 1, numSeconds = 0, right = left + 1;
            while (right < len && s[right] == startChar) {
                numFirsts++;
                right++;
            }
            while (right < len && s[right] == otherChar) {
                numSeconds++;
                if (numFirsts == numSeconds) {
                    count++;
                    break;
                }
                right++;
            }
        }
        return count;
    }
};