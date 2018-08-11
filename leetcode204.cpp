#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
    	int res = 0;
        for(int i=1;i<n;i++){
        	if(isPrime(i))
        		res++;
        }
        return res;
    }
    
    bool isPrime(int n){
    	if(n == 2)
    		return true;
    	if(n == 1)
    		return false;
    	for(int i=2;i<=sqrt(n);i++){
    		if(n % i == 0)
    			return false;
    	}
    	
    	return true;
    }
};

int main(){
	
}
