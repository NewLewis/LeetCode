#include <iostream>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
    	string res;
		res = string(num/1000,'M');
		num %= 1000;
		
		if(num >= 900){
			res += "CM";
			num -= 900;
		}
		
		if(num >= 500){
			res += "D";
			num -= 500;
		}	
		
		if(num >= 400){
			res += "CD";
			num -= 400;
		}
		
		res += string(num/100,'C');
		num %= 100;
		
		if(num >= 90){
			res += "XC";
			num -= 90;
		}
		
		if(num >= 50){
			res += "L";
			num -= 50;
		}
		
		if(num >= 40){
			res += "XL";
			num -= 40;
		}
		
		res += string(num/10,'X');
		num %= 10;
		
		if(num >= 9){
			res += "IX";
			num -= 9;
		}
		
		if(num >= 5){
			res += "V";
			num -= 5;
		}
		
		if(num >= 4){
			res += "IV";
			num -= 4;
		}
		
		res += string(num,'I');
    	
    	return res;
    }
};

int main(){
	
}
