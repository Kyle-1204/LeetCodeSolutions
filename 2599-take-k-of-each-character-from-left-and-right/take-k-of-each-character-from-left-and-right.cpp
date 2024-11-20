class Solution {
public:
    int takeCharacters(string s, int k) {
        int left = 0, len = s.length(), right = len - 1;
        vector<int> vect(3);
        while (left < len && (vect[0] < k || vect[1] < k || vect[2] < k)){
            vect[s[left] - 'a']++;
            left++;
        }
        if (vect[0] < k || vect[1] < k || vect[2] < k) return -1;
        int minLen = left;
        left--;
        while (left >= 0){
            char chr = s[left];
            vect[chr - 'a']--;
            left--;
            while (vect[chr - 'a'] < k){
                vect[s[right] - 'a']++;
                right--;
            }
            while (left >= 0 && vect[s[left] - 'a'] > k){
                vect[s[left] - 'a']--;
                left--;
            }
            //cout << "Left: " << left << " Right: " << right << endl;
            minLen = min(left + (len - right), minLen);
        }
        return minLen;
    }
};