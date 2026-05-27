class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<stack<int>> chars(26);
        vector<int> vals(26);
        int ans = 0;
        for (auto& chr: word){
            if (islower(chr)){
                if (!(chars[chr -'a'].empty())){
                    if (isupper(chars[chr - 'a'].top())) vals[chr - 'a'] = -1;
                    chars[chr - 'a'].pop();
                }
                chars[chr - 'a'].push(chr);
            }
            else {
                if (chars[chr - 'A'].empty()) vals[chr - 'A'] = -1;
                else {
                    if (islower(chars[chr - 'A'].top()) && vals[chr - 'A'] != -1) vals[chr - 'A'] = 1;
                    chars[chr - 'A'].pop();
                }
                chars[chr - 'A'].push(chr);
            }
        }
        for (int i = 0; i < 26; i++){
            if (vals[i] == 1 && !(chars[i].empty())) ans++;
        }
        return ans;
    }
};