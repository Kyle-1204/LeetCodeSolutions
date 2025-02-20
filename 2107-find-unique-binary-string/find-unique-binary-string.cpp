class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        for (auto& num: nums) strs.insert(num);
        generateStrings("", n);
        return ans;
    }
private:
    string ans;
    unordered_set<string> strs;
    void generateStrings(string str, int n){
        if (ans == ""){
            if (str.length() == n){
                if (strs.find(str) == strs.end()) ans = str;
                return;
            }
            generateStrings(str + '0', n);
            generateStrings(str + '1', n);
        }
    }
};