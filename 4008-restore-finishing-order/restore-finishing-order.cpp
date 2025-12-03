class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for (auto& num: order){
            if (find(friends.begin(), friends.end(), num) != friends.end()) ans.push_back(num);
        }
        return ans;
    }
};