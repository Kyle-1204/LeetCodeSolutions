class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> mp;
        int maxLen = -1, len = s.length();
        for (int left = 0; left < len; left++){
            string str;
            char currChar = s[left];
            str += currChar;
            mp[str]++;
            if (mp[str] >= 3) maxLen = max(maxLen, 1);
            int right = left + 1;
            while (right < len && s[right] == currChar){
                str += currChar;
                right++;
                mp[str]++;
                if (mp[str] >= 3) maxLen = max(maxLen, right - left);
            }
        }
        return maxLen;
    }
};