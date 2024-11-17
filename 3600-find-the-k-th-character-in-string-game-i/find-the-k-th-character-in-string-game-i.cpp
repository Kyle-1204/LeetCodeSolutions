class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (k > word.length()){
            string str = word;
            for (auto& chr: str)chr++;
            word += str;
        }
        return word[k-1];
    }
};