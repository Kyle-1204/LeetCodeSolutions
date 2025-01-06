class Solution {
private:
    unordered_map<char, string> mp =
        {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6',"mno"},
        {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    vector<string> ans;
    void findCombos(string currString, string digits, int index){
        if (index == digits.length()){
            ans.push_back(currString);
            return;
        }
        string letters = mp[digits[index++]];
        for (int i = 0; i < letters.length(); i++) findCombos(currString + letters[i], digits, index);
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0) return {};
        findCombos("", digits, 0);
        return ans;
    }
};