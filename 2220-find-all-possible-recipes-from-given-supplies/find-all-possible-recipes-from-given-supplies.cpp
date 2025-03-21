class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        int len = recipes.size();
        vector<string> ans;
        queue<string> q;
        unordered_map<string, char> mp;
        for (auto& supply: supplies) q.push(supply);
        while (!q.empty()){
            string currIng = q.front();
            for (int i = 0; i < len; i++){
                if (find(ingredients[i].begin(), ingredients[i].end(), currIng) != ingredients[i].end()){
                    mp[recipes[i]]++;
                    if (mp[recipes[i]] == ingredients[i].size()) {
                        ans.push_back(recipes[i]);
                        q.push(recipes[i]);
                    }
                }
            }
            q.pop();
        }
        return ans;
    }
};