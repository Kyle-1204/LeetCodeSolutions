class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char, int> mp;
        string ans;
        int maxOccurences = 1;
        for (auto& chr: s){
            mp[chr]++;
            if (mp[chr] == maxOccurences) ans += chr;
            else if (mp[chr] > maxOccurences){
                maxOccurences = mp[chr];
                ans = chr;
            }
        }
        return ans;
    }
};