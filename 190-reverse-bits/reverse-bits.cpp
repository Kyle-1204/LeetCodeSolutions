class Solution {
public:
    int reverseBits(int n) {
        vector<int> bits(32);
        int reversed = 0, index = 31;
        while (n){
            if (n % 2) bits[index] = 1;
            index--;
            n /= 2;
        }
        for (int i = 0; i < 32; i++){
            if (bits[i]) reversed += pow(2, i);
        }
        return reversed;
    }
};