class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int numSetBits = __builtin_popcount(num2), ans = 0, exp = 0;
        vector<int> pows;
        while (num1){
            if (num1 % 2) {
                pows.push_back(exp);
                ans += pow(2, exp);
            }
            exp++;
            num1 /= 2;
        }
        int size = pows.size();
        if (size <= numSetBits){
            numSetBits -= size;
            int currPow = 0, powIndex = 0;
            while (numSetBits){
                if (powIndex < size && currPow == pows[powIndex]) powIndex++;
                else{
                    ans += pow(2, currPow);
                    numSetBits--;
                }
                currPow++;
            }
        }
        else {
            for (int i = 0; i < size - numSetBits; i++) ans -= pow(2, pows[i]);
        }
        return ans;
    }
};