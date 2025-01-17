class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int currBit = 0;
        for (auto& bit: derived){
            if (bit == 1) currBit = (currBit == 0 ? 1 : 0);
        }
        return (currBit == 0);
    }
};