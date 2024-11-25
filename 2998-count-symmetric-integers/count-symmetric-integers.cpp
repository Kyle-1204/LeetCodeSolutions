class Solution {
private:
    bool compareSums(string str){
        int len = str.length();
        if (len % 2) return false;
        int sum = 0, half = len/2;
        len--;
        for (int i = 0; i < half; i++) sum += (str[i] - '0') - (str[len - i] - '0');
        return !sum;
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