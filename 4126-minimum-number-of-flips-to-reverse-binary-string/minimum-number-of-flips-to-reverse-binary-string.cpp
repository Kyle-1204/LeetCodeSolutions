class Solution {
public:
    int minimumFlips(int n) {
        vector<int> bits;
        while (n){
            bits.push_back(n % 2);
            n /= 2;
        }
        int size = bits.size(), numSwitches = 0;
        for (int i = 0; i < size; i++){
            if (bits[i] != bits[size - i - 1]) numSwitches++;
        }
        return numSwitches;
    }
};