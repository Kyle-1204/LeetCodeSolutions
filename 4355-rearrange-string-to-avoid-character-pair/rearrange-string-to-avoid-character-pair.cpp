class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string before, after;
        for (auto& chr: s){
            if (chr == y) before += chr;
            else after += chr;
        }
        return before + after;
    }
};