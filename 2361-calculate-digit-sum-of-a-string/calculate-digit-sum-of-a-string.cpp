class Solution {
public:
    string digitSum(string s, int k) {
        int len = s.length();
        while (len > k){
            string str;
            int sum = 0;
            for (int i = 0; i < len; i++){
                sum += s[i] - '0';
                if ((i+1) % k == 0){
                    str += to_string(sum);
                    sum = 0;
                }
            }
            if (len % k) str += to_string(sum);
            s = str;
            len = s.length();
        }
        return s;
    }
};