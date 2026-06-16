class Solution {
public:
    string processStr(string s) {
        string str;
        for (auto& chr: s){
            if (chr == '*'){
                if (!str.empty()) str.pop_back();
            }
            else if (chr == '#') str += str;
            else if (chr == '%') reverse(str.begin(), str.end());
            else str += chr;
        }
        return str;
    }
};