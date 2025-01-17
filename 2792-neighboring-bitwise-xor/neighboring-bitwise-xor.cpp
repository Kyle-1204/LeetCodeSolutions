class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        bool currBit = false;
        for (auto& bit: derived){
            if (bit == 1) currBit = !currBit;
        }
        return (currBit == 0);
    }
};