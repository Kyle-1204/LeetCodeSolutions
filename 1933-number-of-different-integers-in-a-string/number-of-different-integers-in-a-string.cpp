class Solution {
public:
    int numDifferentIntegers(string word) {
        int len = word.length(), i = 0;
        unordered_set<string> numSet;
        while (i < len){
            string num;
            while (i < len && isdigit(word[i])) num += word[i++];
            i++;
            if (num.length() > 0) {
                while (num.length() > 0 && num[0] == '0') num = num.substr(1);
                if (num.length() == 0) numSet.insert("0");
                else numSet.insert(num);
            }
        }
        return numSet.size();
    }
};