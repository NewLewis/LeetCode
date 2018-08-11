#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
    	int res = 0;
        for(int i=0;i<=31;i++){
        	int t1 = x >> i & 1 == 1 ? 1 : 0;
        	int t2 = y >> i & 1 == 1 ? 1 : 0;
        	
        	if(t1 != t2)
        		res++;
        }
        return res;
    }
};

int main(){
	
} 
