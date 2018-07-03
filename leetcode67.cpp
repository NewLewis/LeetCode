#include <iostream>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()){
        	a = string(b.size()-a.size(),'0') + a;
        }else{
        	b = string(a.size()-b.size(),'0') + b;
        }
        
        string res = "";
        int z = 0,tmp;
        for(int i=a.size()-1;i>=0;i--){
        	tmp = (a[i]-'0') + (b[i]-'0');
        	tmp += z;
        	
        	char t = tmp%2 + '0';
        	res = t + res;
        	if(tmp > 1)
        		z = 1;
        	else
        		z = 0;
        }
        
        if(z == 1)
        	res = '1' + res;
        return res;
    }
};

int main(){
	
}
