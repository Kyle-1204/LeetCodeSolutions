class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int len = s.length(), i = 0;
        while (i + k <= len){
            ans.push_back(s.substr(i, k));
            i += k;
        }
        if (len % k){
            string lastStr = "";
            while (k--){
                if (i < len){
                    lastStr += s[i];
                    i++;
                }
                else lastStr += fill;
            }
            ans.push_back(lastStr);
        }
        return ans;
    }
};