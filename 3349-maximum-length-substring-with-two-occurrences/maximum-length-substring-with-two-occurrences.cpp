class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, right = 0, maxLen = 2;
        while (right < s.length()){
            mp[s[right]]++;
            while (mp[s[right]] > 2){
                mp[s[left]]--;
                left++;
            }
            right++;
            maxLen = max(maxLen, right - left);
        }
        return maxLen;
    }
};