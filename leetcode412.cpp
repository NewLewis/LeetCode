#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
    	vector<string> res;
        for(int i=1;i<=n;i++){
        	if(i % 3 == 0 && i % 5 == 0){
        		res.push_back("FizzBuzz");
        	}else if(i % 5 == 0){
        		res.push_back("Buzz");
        	}else if(i % 3 == 0){
        		res.push_back("Fizz");
        	}else{
        		res.push_back(toString(i));
        	}
        }
        return res;
    }
    
    string toString(int n){
    	string res = "";
    	while(n){
    		int t = n % 10;
    		char ch = t + '0';
    		res = ch + res;
    		n /= 10;
    	}
    	
    	return res;
    }
};

int main(){
	
}
