class Solution {
public:
    long long calculateScore(string s) {
        long long ans = 0;
        int len = s.length();
        string reverses = "zyxwvutsrqponmlkjihgfedcba";
        vector<stack<int>> tracker(26);
        for (int i = 0; i < len; i++){
            int index = reverses[s[i] - 'a'] - 'a';
            if (!(tracker[index]).empty()){
                ans += i - tracker[index].top();
                tracker[index].pop();
            }
            else tracker[s[i] - 'a'].push(i);
        }
        return ans;
    }
};