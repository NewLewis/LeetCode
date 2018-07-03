#include <iostream>

using namespace std;

class Solution {
public:
	char ch[27];
    string convertToTitle(int n) {
        generate();
        string res = "";
        int k;
        while(n){
        	k = n % 27;
        	res = ch[k] + res;
        	n /= 27;   
        }
        
        return res;
    }
    void generate(){
    	int i = 1;
    	char k = 'A';
    	
    	ch[0] = '';
    	for(;i<=26;i++,k++){
    		ch[i] = k;
    	}
    }
};

int main(){
	
} 

