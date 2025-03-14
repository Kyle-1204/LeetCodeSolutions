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
        unordered_set<int> digits;
        while (num){
            if (digits.find(num % 10) == digits.end()){
                digits.insert(num % 10);
                num /= 10;
            }
            else return false;
        }
        return true;
    }
};