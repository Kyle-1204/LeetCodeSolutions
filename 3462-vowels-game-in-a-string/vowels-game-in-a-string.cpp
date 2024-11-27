class Solution {
public:
    bool doesAliceWin(string s) {
        string vowels = "aeiou";
        for (auto& chr: s){
            if (vowels.find(chr) != string::npos) return true;
        }
        return false;
    }
};