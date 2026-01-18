class Solution {
public:
    int vowelConsonantScore(string s) {
        int c = 0, v = 0;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (auto& chr: s){
            if (isalpha(chr)){
                if (find(vowels.begin(), vowels.end(), chr) != vowels.end()) v++;
                else c++;
            }
        }
        return (c == 0 ? 0 : v/c);
    }
};