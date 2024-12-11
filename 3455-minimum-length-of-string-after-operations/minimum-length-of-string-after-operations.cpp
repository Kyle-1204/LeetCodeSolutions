class Solution {
public:
    int minimumLength(string s) {
        vector<int> chars(26);
        int ans = 0;
        for (auto& chr: s) {
            int i = chr - 'a';
            chars[i]++;
            if (chars[i] < 3 || chars[i] % 2 == 0) ans++;
            else ans--;
        }
        return ans;
    }
};