class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int len = 0;
        string str;
        for (auto& space: spaces){
            str += s.substr(len, space - len) + ' ';
            len = space;
        }
        return str + s.substr(len, s.length() - len);
    }
};