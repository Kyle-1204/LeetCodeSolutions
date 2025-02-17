class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drank = 0, empty = 0;
        while (numBottles){
            drank += numBottles;
            empty += numBottles;
            numBottles = 0;
            while (empty >= numExchange){
                empty -= numExchange;
                numBottles++;
                numExchange++;
            }
        }
        return drank;
    }
};