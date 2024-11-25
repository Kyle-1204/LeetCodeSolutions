class Solution {
private:
    bool isDigit(string str){
        for (auto& chr: str){
            if (!isdigit(chr)) return false;
        }
        return true;
    }
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = 0;
        for (auto& str: strs){
            if (isDigit(str)) maxVal = max(maxVal, stoi(str));
            else {
                int len = str.length();
                maxVal = max(maxVal, len);
            }
        }
        return maxVal;
    }
};