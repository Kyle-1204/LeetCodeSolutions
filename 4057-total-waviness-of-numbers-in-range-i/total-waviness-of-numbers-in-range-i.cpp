class Solution {
private:
    int findWaves(int num){
        int prevNum = -1, currNum = -1, numWaves = 0;
        while (num){
            int currDigit = num % 10;
            if (prevNum == -1) prevNum = currDigit;
            else if (currNum == -1) currNum = currDigit;
            else{
                if ((currDigit > currNum && prevNum > currNum) || (currDigit < currNum && prevNum < currNum)) numWaves++;
                prevNum = currNum;
                currNum = currDigit;
            }
            num /= 10;
        }
        return numWaves;
    }
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for (int num = max(num1, 101); num <= num2; num++) ans += findWaves(num);
        return ans;
    }
};