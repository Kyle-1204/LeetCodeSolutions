class Solution {
public:
    string freqAlphabets(string s) {
        int index = s.length() - 1;
        string str = "";
        while (index >= 0){
            if (s[index] == '#'){
                str = char(96 + stoi(s.substr(index-2, 2))) + str;
                index -= 3;
            }
            else{
                str = char(96 + (s[index] - '0')) + str;
                index--;
            }
        }
        return str;
    }
};