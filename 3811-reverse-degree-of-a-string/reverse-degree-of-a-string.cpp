class Solution {
public:
    int reverseDegree(string s) {
        int rDegree = 0;
        for (int i = 0; i < s.length(); i++) rDegree += ('z' - s[i] + 1) * (i + 1);
        return rDegree;
    }
};