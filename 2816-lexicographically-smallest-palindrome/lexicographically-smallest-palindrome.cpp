class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int right = s.length() - 1;
        for (int left = 0; left < right; left++){
            if (s[left] > s[right]) s[left] = s[right];
            else if (s[right] > s[left]) s[right] = s[left];
            right--;
        }
        return s;
    }
};