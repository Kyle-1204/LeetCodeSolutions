class Solution {
private:
    string generateString(stack<char> stack1, stack<char> stack2){
        string ans = "";
        while(!stack2.empty()){
            ans += stack1.top();
            ans += stack2.top();
            stack1.pop();
            stack2.pop();
        }
        if (!stack1.empty()) ans += stack1.top();
        return ans;
    }
public:
    string reformat(string s) {
        string alpha = "abcdefghijklmnopqrstuvwxyz", nums = "0123456789";
        stack<char> alphStack, numStack;
        for (auto& chr: s){
            if (alpha.find(chr) != string::npos) alphStack.push(chr);
            else if (nums.find(chr) != string::npos) numStack.push(chr);
        }
        int alphSize = alphStack.size(), numsSize = numStack.size();
        if (abs(alphSize - numsSize) > 1) return "";
        else if (alphSize >= numsSize) return generateString(alphStack, numStack);
        else return generateString(numStack, alphStack);
    }
};