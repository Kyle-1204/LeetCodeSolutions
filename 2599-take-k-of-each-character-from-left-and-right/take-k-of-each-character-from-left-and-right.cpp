class Solution {
public:
    int takeCharacters(string s, int k) {
        int left = 0, len = s.length(), right = len - 1;
        unordered_map<char, int> mp = {{'a', 0}, {'b', 0}, {'c', 0}};
        while (left < len && (mp['a'] < k || mp['b'] < k || mp['c'] < k)){
            mp[s[left]]++;
            left++;
        }
        if (mp['a'] < k || mp['b'] < k || mp['c'] < k) return -1;
        int minLen = left;
        left--;
        while (left >= 0){
            char chr = s[left];
            mp[chr]--;
            left--;
            while (mp[chr] < k){
                mp[s[right]]++;
                right--;
            }
            while (left >= 0 && mp[s[left]] > k){
                mp[s[left]]--;
                left--;
            }
            minLen = min(left + (len - right), minLen);
        }
        return minLen;
    }
};