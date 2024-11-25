class Solution {
public:
    int minTimeToType(string word) {
        //cout << 27 - ('z' - 'a') << endl;
        char currChr = 'a';
        int numMoves = 0;
        for (auto& chr: word){
            int absVal = abs(chr - currChr);
            numMoves += min(absVal, 26 - absVal) + 1;
            currChr = chr;
        }
        return numMoves;
    }
};