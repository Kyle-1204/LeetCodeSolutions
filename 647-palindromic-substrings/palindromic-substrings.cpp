class Solution {
private:
    bool isPalindrome(string s){
        int left = 0, right = s.length() - 1;
        while (left < right){
            if (s[left++] != s[right--]) return false;
        }
        return true;
    }
public:
    int countSubstrings(string s) {
        int len = s.length(), ans = len;
        for (int i = 0; i < len - 1; i++){
            string str;
            str += s[i];
            for (int j = i + 1; j < len; j++){
                str += s[j];
                if(isPalindrome(str)) ans++;
            }
        }
        return ans;
    }
};