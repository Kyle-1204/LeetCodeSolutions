class Solution {
public:
    string stringHash(string s, int k) {
        int len = s.length(), hashVal = 0;
        string hash;
        for (int i = 1; i <= len; i++){
            hashVal += s[i-1] - 'a';
            if (!(i%k)){
                hash += (hashVal % 26) + 'a';
                hashVal = 0;
            }
        }
        return hash;
    }
};