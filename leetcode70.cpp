#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int vec[10000];
    int climbStairs(int n) {
        vec[0] = 1;
        vec[1] = 1;
        
        for(int i=2;i<=n;i++)
        	vec[i] = vec[i-1] + vec[i-2];
        
        return vec[n];
    }
};

int main(){
	
}
