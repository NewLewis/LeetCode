#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size() - 1,z = 0;
        
        int tmp = digits[k] + 1;
        digits[k--] = tmp % 10;
        if(tmp > 9)
        	z = 1;
        
        while(k >= 0 && z == 1){
        	tmp = digits[k] + z;
        	digits[k--] = tmp % 10;
        	if(tmp > 9)
        		z = 1;
        	else 
        		z = 0;
        }
        
        if(z == 1)
        	digits.insert(digits.begin(),1);
        
        return digits;
    }
};

int main(){
	
}
