class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        int maxVowels = 0, maxCons = 0;
        string vowels = "aeiou";
        for (auto& chr: s){
            mp[chr]++;
            if (vowels.find(chr) != string::npos) maxVowels = max(mp[chr], maxVowels);
            else maxCons = max(mp[chr], maxCons);
        }
        return maxVowels + maxCons;
    }
};