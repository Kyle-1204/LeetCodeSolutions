class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        stack<int> stk, temp;
        int currIndex = 0, size = nums.size();
        vector<int> ans(size);
        for (auto& i: index){
            while (i--){
                temp.push(stk.top());
                stk.pop();
            }
            stk.push(nums[currIndex++]);
            while(!temp.empty()){
                stk.push(temp.top());
                temp.pop();
            }
        }
        for (int i = 0; i < size; i++){
            ans[i] = stk.top();
            stk.pop();
        }
        return ans;
    }
};