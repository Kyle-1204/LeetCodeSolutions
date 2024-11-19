class Solution {
public:
    vector<string> stringSequence(string target) {
        string str = "a";
        int index = 0;
        vector<string> ans;
        while (str != target){
            ans.push_back(str);
            if (str[index] != target[index]) str[index]++;
            else{
                index++;
                str += 'a';
            }
        }
        ans.push_back(target);
        return ans;
    }
};