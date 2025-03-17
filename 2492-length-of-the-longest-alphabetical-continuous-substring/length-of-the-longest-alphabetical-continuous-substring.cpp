class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1, currLen;
        char currChar = ' ';
        for (auto& chr: s){
            if (chr - currChar == 1){
                currLen++;
                ans = max(currLen, ans);
            }
            else currLen = 1;
            currChar = chr;
        }
        return ans;
    }
};