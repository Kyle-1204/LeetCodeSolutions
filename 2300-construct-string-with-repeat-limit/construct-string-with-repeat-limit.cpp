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
        char lastChar = ' ';
        while (!pq.empty()){
            char top = pq.top();
            int index = top - 'a', minRange = min(chars[index], repeatLimit);
            if (top == lastChar && minRange == repeatLimit) minRange--;
            for (int i = 0; i < minRange; i++) ans += top;
            chars[index] -= minRange;
            //cout << top << "  " << chars[index] << endl;
            pq.pop();
            if (pq.empty()) return ans;
            char second = pq.top();
            lastChar = second;
            ans += second;
            chars[second - 'a']--;
            if (chars[second - 'a'] == 0) pq.pop();
            if (chars[index])pq.push(top);
        }
        return ans;
    }
};