class Solution {
public:
    string getSmallestString(string s, int k) {
        int i = 0, len = s.length();
        while (k && i < len){
            if ('z' - s[i] < k || s[i] - 'a' <= k){
                k -= min('z' - s[i] + 1, s[i] - 'a');
                s[i] = 'a';
            }
            else{
                s[i] -= k;
                k = 0;
            }
            i++;
        }
        return s;
    }
};