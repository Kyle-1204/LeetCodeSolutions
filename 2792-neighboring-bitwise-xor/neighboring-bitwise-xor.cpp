class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        bool currBit = true;
        for (auto& bit: derived){
            if (bit) currBit = !currBit;
        }
        return currBit;
    }
};