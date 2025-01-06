class Solution {
public:
    long long calculateScore(string s) {
        long long ans = 0;
        int len = s.length();
        string reverses = "zyxwvutsrqponmlkjihgfedcba";
        vector<stack<int>> tracker(26);
        for (int i = 0; i < len; i++){
            int index = s[i] - 'a', rIndex = reverses[index] - 'a';
            if (!(tracker[rIndex]).empty()){
                ans += i - tracker[rIndex].top();
                tracker[rIndex].pop();
            }
            else tracker[index].push(i);
        }
        return ans;
    }
};