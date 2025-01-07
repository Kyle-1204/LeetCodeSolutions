class Solution {
public:
    string sortVowels(string s) {
        string vowels = "AEIOUaeiou";
        string vowelsFound;
        for (auto& chr: s){
            if (vowels.find(chr) != string::npos) vowelsFound += chr;
        }
        sort(vowelsFound.begin(), vowelsFound.end(), [] (const char &chr1, const char &chr2) {
            return (chr1 < chr2);
        });
        int i = 0;
        for (auto& chr: s){
            if (vowels.find(chr) != string::npos) chr = vowelsFound[i++];
        }
        return s;
    }
};