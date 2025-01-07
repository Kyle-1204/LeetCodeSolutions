class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int numDrank = 0, numEmpty = 0;
        while (numBottles){
            numDrank += numBottles;
            numEmpty += numBottles;
            numBottles = 0;
            while (numEmpty >= numExchange){
                numEmpty -= numExchange;
                numBottles++;
                numExchange++;
            }
        }
        return numDrank;
    }
};