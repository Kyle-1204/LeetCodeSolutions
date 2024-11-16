class Solution {
    private:
        bool isDivisible(string base, string divisor){
            string str = divisor;
            while (str.length() < base.length()) str += divisor;
            return (str == base);
        }
public:
    string gcdOfStrings(string str1, string str2) {
        int len = min(str1.length(), str2.length()), index = 0;
        string ans, currStr = "";
        while (index < len && str1[index] == str2[index]){
            currStr += str1[index];
            if (isDivisible(str1, currStr) && isDivisible(str2, currStr)) ans = currStr;
            index++;
        }
        return ans;
    }
};