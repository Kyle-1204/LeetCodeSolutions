class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //std::vector<int> AB = A;
        //AB.insert(AB.end(), B.begin(), B.end());;
        vector<int> odds, evens;
        for (auto& num: nums){
            if (num % 2) odds.push_back(num);
            else evens.push_back(num);
        }
        evens.insert(evens.end(), odds.begin(), odds.end());
        return evens;
    }
};