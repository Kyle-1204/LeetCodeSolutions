class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int> stk;
        vector<int> nums(9);
        string ans;
        int len = pattern.length();
        for (int i = 0; i < len; i++){
            if (pattern[i] == 'I'){
                int newNum = 1;
                while (nums[newNum - 1] != 0) newNum++;
                nums[newNum - 1] = 1;
                ans += to_string(newNum);
            }
            else{
                while (i < len && pattern[i] == 'D'){
                    int newNum = 1;
                    while (nums[newNum - 1] != 0) newNum++;
                    nums[newNum - 1] = 1;
                    stk.push(newNum);
                    i++;
                }
                int newNum = 1;
                while (nums[newNum - 1] != 0) newNum++;
                nums[newNum - 1] = 1;
                string addOn = to_string(newNum);
                while (!stk.empty()){
                    addOn += to_string(stk.top());
                    stk.pop();
                }
                ans += addOn;
            }
        }
        if (ans.length() == len){
            int newNum = 1;
            while (nums[newNum - 1] != 0) newNum++;
            ans += to_string(newNum);
        }
        return ans;
    }
};