class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        priority_queue<char> pq;
        vector<int> chars(26);
        string ans;
        for (auto& chr: s){
            int index = chr - 'a';
            if (chars[index] == 0) pq.push(chr);
            chars[index]++;
        }
        char second = ' ';
        while (!pq.empty()){
            char top = pq.top();
            int index = top - 'a', minRange = min(chars[index], repeatLimit);
            if (top == second && minRange == repeatLimit) minRange--;
            ans += string(minRange, top);
            chars[index] -= minRange;
            pq.pop();
            if (pq.empty()) return ans;
            second = pq.top();
            ans += second;
            chars[second - 'a']--;
            if (chars[second - 'a'] == 0) pq.pop();
            if (chars[index]) pq.push(top);
        }
        return ans;
    }
};