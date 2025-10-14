class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long mult = 1;
        while (n){
            int dec = n % 10;
            if (dec){
                ans.push_back(dec * mult);
            }
            mult *= 10;
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};