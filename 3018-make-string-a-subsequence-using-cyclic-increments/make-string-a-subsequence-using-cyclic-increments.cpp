class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i2 = 0, len = str1.length(), len2 = str2.length();
        for (int i = 0; i < len; i++){
            char chr1 = str1[i], chr2 = str2[i2];
            if (chr1 == chr2 || chr1 + 1 == chr2 || (chr1 == 'z' && chr2 == 'a')){
                i2++;
                if (i2 == len2) return true;
            }
        }
        return false;
    }
};