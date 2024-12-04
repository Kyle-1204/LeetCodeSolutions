class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i2 = 0, len = str1.length(), len2 = str2.length();
        for (int i = 0; i < len; i++){
            if (str1[i] == str2[i2] || str1[i] + 1 == str2[i2] || (str1[i] == 'z' && str2[i2] == 'a')){
                i2++;
                if (i2 == len2) return true;
            }
        }
        return false;
    }
};