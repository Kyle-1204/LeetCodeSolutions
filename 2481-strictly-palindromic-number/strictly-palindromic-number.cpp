class Solution {
private:
    string generateStr(int n, int base){
        string str = "";
        while (n){
            str += '0' + (n % base);
            n /= base;
        }
        return str;
    }
    bool notPalindrome(string str){
        int left = 0, right = str.length() - 1;
        while (left < right){
            if (str[left] != str[right]) return true;
        }
        return false;
    }
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i < n - 1; i++){
            if (notPalindrome(generateStr(n, i))) return false;
        }
        return true;
    }
};