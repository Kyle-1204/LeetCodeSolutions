class Solution {
private:
    bool compareSums(string str){
        int len = str.length();
        if (len % 2) return false;
        int firstSum = 0, secondSum = 0, half = len/2;
        for (int i = 0; i < half; i++){
            firstSum += (str[i] - '0');
            secondSum += (str[len - i - 1] - '0');
        }
        return firstSum == secondSum;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++){
            if (compareSums(to_string(i))) count++;
        }
        return count;
    }
};