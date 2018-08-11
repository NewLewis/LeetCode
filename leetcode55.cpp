#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool bo[1000];
    bool canJump(vector<int>& nums) {
    	for(int i=0;i<1000;i++){
    		bo[i] = false; 
    	}
    	bo[0] = true;
    	
    	int k,t;
    	for(int i=0;i<nums.size();i++){
    		if(bo[i] && nums[i] > 0){
    			k = nums[i];
    			t = i+1;
				while(k--)
					bo[t++] = true;	
    		}
    	}
    	
    	if(bo[nums.size()-1])
			return true;
		else 
			return false; 
    }
};

int main(){
	
}
