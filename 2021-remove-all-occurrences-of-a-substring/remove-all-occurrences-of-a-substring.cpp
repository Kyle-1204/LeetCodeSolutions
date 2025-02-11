class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        int len = part.length();
        for(auto& chr: s){
            ans += chr;
            while (ans.length() >= len && ans.substr(ans.size() - len, len) == part){
                ans = ans.substr(0, ans.size() - len);
            }
        }
        return ans;
    }
};