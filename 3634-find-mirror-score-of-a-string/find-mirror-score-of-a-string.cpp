class Solution {
public:
    long long calculateScore(string s) {
        long long ans = 0;
        int len = s.length();
        string reverses = "zyxwvutsrqponmlkjihgfedcba";
        vector<stack<int>> tracker(26);
        for (int i = 0; i < len; i++){
            int index = s[i] - 'a';
            if (!(tracker[reverses[index]- 'a']).empty()){
                ans += i - tracker[reverses[index] - 'a'].top();
                tracker[reverses[index]- 'a'].pop();
            }
            else tracker[index].push(i);
        }
        return ans;
    }
};