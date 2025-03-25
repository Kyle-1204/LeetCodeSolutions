class Solution {
public:
    int longestCommonPrefix(string s, string t) {
        int si = 0, ti = 0, len = s.length();
        while (si < len){
            if (s[si] != t[ti]){
                if (si == ti && si < len - 1 && s[si + 1] == t[ti]) si++;
                else return ti;
            }
            si++;
            ti++;
        }
        return ti;
    }
};