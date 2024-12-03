class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char newChar = 'a';
        for (auto& chr: key){
            if (chr != ' ' && mp.find(chr) == mp.end()) mp[chr] = newChar++;
        }
        for (auto& chr: message){
            if (chr != ' ') chr = mp[chr];
        }
        return message;
    }
};