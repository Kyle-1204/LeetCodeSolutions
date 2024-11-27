class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans = 0;
        vector<int> lower(26), upper(26);
        for (auto& chr: word){
            if (isupper(chr)){
                int i = chr - 'A';
                upper[i]++;
                if (upper[i] == 1 && lower[i] >= 1) ans++;
            }
            else{
                int i = chr - 'a';
                lower[i]++;
                if (lower[i] == 1 && upper[i] >= 1) ans++;
            }
        }
        return ans;
    }
};