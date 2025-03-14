class Solution {
public:
    int numberCount(int a, int b) {
        int ans = 0;
        for (int num = a; num <= b; num++){
            if (hasUniqueDigits(num)) ans++;
        }
        return ans;
    }

private:
    bool hasUniqueDigits(int num){
        vector<int> digits(10);
        while (num){
            if (digits[num % 10]) return false;
            else {
                digits[num % 10]++;
                num /= 10;
            }
        }
        return true;
    }
};