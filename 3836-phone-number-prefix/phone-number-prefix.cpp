class Solution {
public:
    bool phonePrefix(vector<string>& numbers) {
        sort(numbers.begin(), numbers.end(), [](const std::string& a, const std::string& b) {
            return a.length() > b.length();
        });
        unordered_set<string> numSet;
        for (auto& number: numbers){
            if (numSet.find(number) != numSet.end()) return false;
            string str;
            for (auto& digit: number){
                str += digit;
                numSet.insert(str);
            }
        }
        return true;
    }
};