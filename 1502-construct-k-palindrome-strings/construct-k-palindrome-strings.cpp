class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        if (s.length() == k) return true;
        vector<int> freq(26);
        for (auto& chr: s) freq[chr - 'a']++;
        int oddCount = 0;
        for (int i = 0; i < 26; i++) oddCount += freq[i] % 2;
        return (oddCount <= k);
    }
};