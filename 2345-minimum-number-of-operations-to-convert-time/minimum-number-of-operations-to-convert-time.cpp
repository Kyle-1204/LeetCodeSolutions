class Solution {
public:
    int convertTime(string current, string correct) {
        int diff = (stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3))) - (stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3)));
        int numOpps = 0;
        while (diff){
            if (diff - 60 >= 0) diff -= 60;
            else if (diff - 15 >= 0) diff -= 15;
            else if (diff - 5 >= 0) diff -= 5;
            else diff--;
            numOpps++;
        }
        return numOpps;
    }
};