class Solution {
public:
    bool checkPowersOfThree(int n) {
        int power = 0;
        while (pow(3, power) < n) power++;
        return pow(3, power) == n || findPower(n, power);
    }

private:
    bool findPower(int n, int power){
        //cout << n << endl;
        if (n == 0) return true;
        if (n < 0) return false;
        bool isPower = false;
        while (power-- > 0){
            isPower = isPower || findPower(n - pow(3, power), power);
        }
        return isPower;
    }
};