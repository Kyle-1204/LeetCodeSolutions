class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        if (s1[0] != s2[0] || s2[0] != s3[0]) return -1;
        int len1 = s1.length(), len2 = s2.length(), len3 = s3.length(), minLen = min(len1, min(len2, len3)), numChanges = len1 + len2 + len3 - 3, i = 1;
        while (i < minLen && s1[i] == s2[i] && s2[i] == s3[i]) {
            numChanges -= 3;
            i++;
        }
        return numChanges;
    }
};