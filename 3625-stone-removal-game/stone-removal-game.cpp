class Solution {
public:
    bool canAliceWin(int n) {
        int numToRemove = 10;
        bool aliceWins = false;
        while (numToRemove && n - numToRemove >= 0){
            n -= numToRemove;
            numToRemove--;
            aliceWins = !aliceWins;
        }
        return aliceWins;
    }
};