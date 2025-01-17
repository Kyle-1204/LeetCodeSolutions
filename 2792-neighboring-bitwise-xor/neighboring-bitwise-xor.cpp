class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int currBit = 0, size = derived.size();
        vector<int> orig(size);
        for (int i = 0; i < size; i++){
            orig[i] = currBit;
            if (derived[i] == 1) currBit = (currBit == 0 ? 1 : 0);
        }
        return (orig[0] == currBit);
    }
};