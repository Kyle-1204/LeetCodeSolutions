class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> mp;
        int numPairs = 0;;
        for (auto& word: words){
            if (mp.find(word) != mp.end()){
                mp.erase(word);
                numPairs++;
            }
            else{
                string reverse = "";
                for (int i = word.length() - 1; i >= 0; i--) reverse += word[i];
                mp[reverse]++;
            }
        }
        return numPairs;
    }
};