class Solution {
public:
    int minimumOperations(string num) {
        bool zeroFound = false, fiveFound = false;
        int end = num.length() - 1;
        for (int i = end; i >= 0; i--){
            if (fiveFound && (num[i] == '7' || num[i] == '2')) return end - i - 1;
            if (num[i] == '0'){
                if (zeroFound) return end - i - 1;
                zeroFound = true;
            }
            if (num[i] == '5') {
                if (zeroFound) return end - i - 1;
                fiveFound = true;
            }
        }
        return (zeroFound ? end : end + 1);
    }
};