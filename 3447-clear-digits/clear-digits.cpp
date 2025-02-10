class Solution {
public:
    string clearDigits(string s) {
        int index = 0, len = s.length();
        string ans = "";
        while (index < len){
            if (isdigit(s[index])) ans.pop_back();
            else ans += s[index];
            index++;
        }
        return ans;
    }
};