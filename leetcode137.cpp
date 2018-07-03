#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum,ans = 0;
        
        
        for(int i=0;i<32;i++){
        	sum = 0;
        	for(int n : nums){
        		if((n >> i) & 1)
        			sum++;
        	}
			if(sum % 3)
        		ans |= 1 << i;
        }
        
        return ans;
    }
};

int main(){
	
} 
