class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1[0] != s2[0]){
            char temp = s1[0];
            s1[0] = s1[2];
            s1[2] = temp;
        }
        if (s1[1] != s2[1]){
            char temp = s1[1];
            s1[1] = s1[3];
            s1[3] = temp;
        }
        return s1 == s2;
    }
};