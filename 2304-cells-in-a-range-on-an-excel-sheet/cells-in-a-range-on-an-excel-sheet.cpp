class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char endChar = s[3] + 1, endNum = s[4] + 1;
        for (char chr = s[0]; chr != endChar; chr++){
            for (char num = s[1]; num != endNum; num++){
                string str;
                str += chr;
                str += num;
                ans.push_back(str);
            }
        }
        return ans;
    }
};