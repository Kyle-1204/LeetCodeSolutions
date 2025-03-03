class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lessers, equals, greaters;
        for (auto& num: nums){
            if (num < pivot) lessers.push_back(num);
            else if (num > pivot) greaters.push_back(num);
            else equals.push_back(num);
        }
        for (auto& equal: equals) lessers.push_back(equal);
        for (auto& greater: greaters) lessers.push_back(greater);
        return lessers;
    }
};