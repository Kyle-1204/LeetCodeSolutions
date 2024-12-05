class Solution {
public:
    bool canChange(string start, string target) {
        stack<pair<char, int>> startStk, targetStk;
        int n = start.length();
        for (int i = 0; i < n; i++){
            char s = start[i], t = target[i];
            if (s == 'L' || s == 'R') startStk.push(make_pair(s,i));
            if (t == 'L' || t == 'R') targetStk.push(make_pair(t,i));
        }
        if (startStk.size() != targetStk.size()) return false;
        while (!targetStk.empty()){
            char sChar = startStk.top().first, tChar = targetStk.top().first;
            int sIndex = startStk.top().second, tIndex = targetStk.top().second;
            if (sChar != tChar || (sChar == 'L' && sIndex < tIndex) || (sChar == 'R' && sIndex > tIndex)) return false;
            targetStk.pop();
            startStk.pop();
        }
        return true;
    }
};