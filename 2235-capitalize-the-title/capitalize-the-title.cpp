class Solution {
public:
    string capitalizeTitle(string title) {
        int wordLen = 1;
        for (int i = title.length() - 1; i >= 0; i--){
            if (i == 0 || title[i-1] == ' '){
                if (wordLen > 2) title[i] = toupper(title[i]);
                else title[i] = tolower(title[i]);
                i--;
                wordLen = 1;
            }
            else{
                wordLen++;
                title[i] = tolower(title[i]);
            }
        }
        return title;
    }
};