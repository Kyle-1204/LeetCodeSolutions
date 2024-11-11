class Solution {
private:
    string toBinary(string str){
        string bin = "";
        int num = stoi(str);
        while (num){
            if (num % 2) bin = '1' + bin;
            else bin = '0' + bin;
            num /= 2;
        }
        return bin;
    }
public:
    string convertDateToBinary(string date) {
        int index = 0;
        while (date[index] != '-') index++;
        return toBinary(date.substr(0, index)) + '-' + toBinary(date.substr(index+1, 2)) + '-' + toBinary(date.substr(index+4, 2));
    }
};