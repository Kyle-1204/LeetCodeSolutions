class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, int> mp;
        int i = 0;
        for (auto& chr: key){
            if (chr != ' ' && mp.find(chr) == mp.end()) mp[chr] = 'a' + i++;
        }
        for (auto& chr: message){
            if (chr != ' ') chr = char (mp[chr]);
        }
        return message;
    }
};