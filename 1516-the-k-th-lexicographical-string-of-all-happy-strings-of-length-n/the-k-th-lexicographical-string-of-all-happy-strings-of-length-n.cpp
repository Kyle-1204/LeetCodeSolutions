class Solution {
public:
    string getHappyString(int n, int k) {
        generateStrings("", n);
        if (strs.size() < k) return "";
        //sort(strs.begin(), strs.end());
        return strs[k - 1];
    }
private:
    vector<string> strs;
    void generateStrings(string str, int n){
        int len = str.length();
        if (len == n){
            strs.push_back(str);
            return;
        }
        for (int i = 'a'; i < 'd'; i++){
            char chr = char (i);
            if (len == 0 || str.back() != chr) generateStrings(str + chr, n);
        }
    }
};