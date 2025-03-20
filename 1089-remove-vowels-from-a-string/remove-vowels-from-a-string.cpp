class Solution {
public:
    string removeVowels(string s) {
        string ans;
        for (auto&chr: s){
            if (chr != 'a' && chr != 'e' && chr != 'i' && chr != 'o' && chr != 'u') ans += chr;
        }
        return ans;
    }
};