class Solution {
public:
    string maxValue(string n, int x) {
        bool positive, insertionAwaiting = true;
        char xChr = (char) x + '0';
        string ans;
        int i, len = n.length();
        if (n[0] == '-') {
            positive = false;
            i = 1;
            ans += '-';
        }
        else {
            positive = true;
            i = 0;
        }
        while (i < len && insertionAwaiting){
            if ((positive && n[i] < xChr) || (!positive && n[i] > xChr)){
                insertionAwaiting = false;
                ans += xChr;
            }
            ans += n[i];
            i++;
        }
        while (i < len) ans += n[i++];
        if (insertionAwaiting) ans += xChr;
        return ans;
    }
};