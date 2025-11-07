class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;
        string digits = "0123456789", vowels = "aeiou", consonants = "bcdfghijklmnpqrstvwxyz";
        bool vowelFound = false, consFound = false;
        for (auto& chr: word){
            chr = tolower(chr);
            if (vowels.find(chr) != string::npos) vowelFound = true;
            else if (consonants.find(chr) != string::npos) consFound = true;
            else if (digits.find(chr) == string::npos) return false;
        }
        return vowelFound && consFound;
    }
};