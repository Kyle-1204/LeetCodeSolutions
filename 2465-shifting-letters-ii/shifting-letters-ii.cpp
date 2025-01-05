class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int len = s.length();
        vector<int> begins(len), ends(len);
        //unordered_map<int, int> begins, ends;
        for (auto& shift: shifts){
            if (shift[2] == 1){
                begins[shift[0]]++;
                ends[shift[1]]++;
            }
            else{
                begins[shift[0]]--;
                ends[shift[1]]--;
            }
        }
        int change = 0;
        for (int i = 0; i < len; i++){
            change += begins[i];
            int val = (int) s[i] + change;
            while (val > 'z') val -= 26;
            while (val < 'a') val += 26;
            s[i] = (char) val;
            change -= ends[i];
        }
        return s;
    }
};