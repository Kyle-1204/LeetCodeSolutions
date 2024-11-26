class Solution {
public:
    string stringHash(string s, int k) {
        int len = s.length(), hashVal = 0;
        string hash;
        for (int i = 0; i < len; i++){
            hashVal += s[i] - 'a';
            if ((i+1) % k == 0){
                hash += char ((hashVal % 26) + 'a');
                hashVal = 0;
            }
        }
        return hash;
    }
};