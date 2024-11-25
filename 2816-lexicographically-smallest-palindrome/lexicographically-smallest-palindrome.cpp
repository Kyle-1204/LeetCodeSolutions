class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while (left < right){
            char l = s[left], r = s[right];
            if (l != r){
                if (l > r) s[left] = r;
                else s[right] = l;
            }
            left++;
            right--;
        }
        return s;
    }
};