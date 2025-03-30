class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        unordered_set<char> letterSet;
        int len = s.length(), index = 0, lastIndex = -1;
        for (int i = 0; i < len; i++) mp[s[i]]++;
        vector<int> ans;
        char startChar = s[0];
        while (index < len){
            char chr = s[index];
            letterSet.insert(chr);
            mp[chr]--;
            if (mp[chr] == 0) letterSet.erase(chr);
            if (mp[startChar] == 0){
                while (index < len && !letterSet.empty()){
                    index++;
                    mp[s[index]]--;
                    if (mp[s[index]] == 0) letterSet.erase(s[index]);
                    else letterSet.insert(s[index]);
                }
                if (index < len) startChar = s[index + 1];
                ans.push_back(index - lastIndex);
                lastIndex = index;
            }
            index++;
        }
        return ans;
    }
};