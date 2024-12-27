class Solution {
private:
    vector<string> ans;
    string input;
    int sLen;
    void findCombos(string str){
        int len = str.length();
        while (len < sLen && !isalpha(input[len])) str += input[len++];
        if (len == sLen) {
            ans.push_back(str);
            return;
        }
        findCombos(str + (char) toupper(input[len]));
        findCombos(str + (char) tolower(input[len]));
    }
public:
    vector<string> letterCasePermutation(string s) {
        input = s;
        sLen = s.length();
        findCombos("");
        return ans;
    }
};