class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> mp;
        int maxFreq = 0;
        string ans;
        for (auto& response: responses){
            unordered_set<string> responseSet;
            for (auto& rating: response){
                if (responseSet.find(rating) == responseSet.end()){
                    responseSet.insert(rating);
                    mp[rating]++;
                    if (mp[rating] > maxFreq){
                        maxFreq++;
                        ans = rating;
                    }
                    else if (mp[rating] == maxFreq && compareStrs(rating, ans)) ans = rating;
                }
            }
        }
        return ans;
    }
private:
    bool compareStrs(string str1, string str2){
        int len = min(str1.length(), str2.length());
        for (int i = 0; i < len; i++){
            if (str1[i] > str2[i]) return false;
            else if (str1[i] < str2[i]) return true;
        }
        return str1.length() < str2.length();
    }
};