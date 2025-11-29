class Solution {
public:
    string removeOuterParentheses(string s) {
        int numPar = 0;
        string ans;
        for (auto& chr: s){
            if (chr == '('){
                if (numPar) ans += chr;
                numPar++;
            }
            else{
                numPar--;
                if (numPar) ans += chr;
            }
        }
        return ans;
    }
};