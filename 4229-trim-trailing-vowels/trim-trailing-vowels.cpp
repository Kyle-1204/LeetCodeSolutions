class Solution {
public:
    string trimTrailingVowels(string s) {
        int end = s.length() - 1;
        string vowels = "aeiou";
        while (end >= 0 && vowels.find(s[end]) != string::npos) end--;
        return s.substr(0, end + 1);
    }
};