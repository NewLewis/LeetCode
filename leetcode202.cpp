#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int k = 10000;
        while(k--){
        	if(pow2Sum(n) == 1)
        		return true;
        	n = pow2Sum(n);
        }
        return false;
    }
    
    int pow2Sum(int n){
    	int sum = 0;
    	while(n){
    		sum += pow(n%10,2);
    		n /= 10;
    	}
    	return sum;
    }
};

int main(){
	
}
