class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int numDiff = 0;
        char chr1, chr2;
        for (int i = 0; i < s1.length(); i++){
            if (s1[i] != s2[i]){
                if ((numDiff == 1 && (chr1 != s2[i] || chr2 != s1[i])) || numDiff > 1) return false;
                else{
                    chr1 = s1[i];
                    chr2 = s2[i];
                }
                numDiff++;
            }
        }
        return numDiff != 1;
    }
};