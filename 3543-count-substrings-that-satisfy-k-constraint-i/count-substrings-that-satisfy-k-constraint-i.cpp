class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int count = 0, len = s.length();
        for (int i = 0; i < len; i++){
            vector<int> bits = {0, 0};
            int right = i;
            while (right < len){
                bits[s[right] - '0']++;
                if (bits[0] <= k || bits[1] <= k) {
                    count++;
                    right++;
                }
                else right = len;
            }
        }
        return count;
    }
};