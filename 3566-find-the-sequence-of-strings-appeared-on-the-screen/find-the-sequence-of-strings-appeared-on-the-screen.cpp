class Solution {
public:
    vector<string> stringSequence(string target) {
        string str = "a";
        int currLen = 1;
        vector<string> ans;
        while (str != target){
            ans.push_back(str);
            if (str != target.substr(0, currLen)) str[currLen-1]++;
            else{
                currLen++;
                str += 'a';
            }
        }
        ans.push_back(target);
        return ans;
    }
};