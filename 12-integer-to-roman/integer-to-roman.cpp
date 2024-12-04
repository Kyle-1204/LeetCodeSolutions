class Solution {
public:
    string intToRoman(int num) {
        string str;
        while (num >= 1000) {
            str += 'M';
            num -= 1000;
        }
        int hundreds = num/100;
        if (hundreds == 9) {
            str += "CM";
            num -= 900;
        }
        else if (hundreds == 4) {
            str += "CD";
            num -= 400;
        }
        else if (hundreds >= 5){
            str += 'D';
            num -= 500;
        }
        while (num >= 100){
            str += 'C';
            num -= 100;
        }
        int tens = num/10;
        if (tens == 9) {
            str += "XC";
            num -= 90;
        }
        else if (tens == 4) {
            str += "XL";
            num -= 40;
        }
        else if (tens >= 5){
            str += 'L';
            num -= 50;
        }
        while (num >= 10){
            str += 'X';
            num -= 10;
        }
        if (num == 9){
            str += "IX";
            num -= 9;
        }
        else if (num == 4){
            str += "IV";
            num -= 4;
        }
        else if (num >= 5){
            str += 'V';
            num -= 5;
        }
        while (num--) str += 'I';
        return str;
    }
};