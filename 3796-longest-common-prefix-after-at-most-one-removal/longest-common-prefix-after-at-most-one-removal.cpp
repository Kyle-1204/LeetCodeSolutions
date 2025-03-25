class Solution {
public:
    int longestCommonPrefix(string s, string t) {
        bool removeFree = true;
        int si = 0, ti = 0, len = s.length();
        while (si < len){
            if (s[si] != t[ti]){
                if (removeFree && si < len - 1 && s[si + 1] == t[ti]){
                    si++;
                    removeFree = false;
                }
                else return ti;
            }
            si++;
            ti++;
        }
        return ti;
    }
};