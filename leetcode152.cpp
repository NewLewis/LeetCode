#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty())
        	return 0;
        	
        int dpMax[100000] = {0};
        int dpMin[100000] = {0};
        int res = -99999999;
        
        for(int i=0;i<nums.size();i++){
        	if(i == 0){
        		dpMax[i] = nums[i];
        		dpMin[i] = nums[i];
        		res = nums[i];
        	}
        	else{
        		int Min = min(dpMax[i-1] * nums[i],dpMin[i-1] * nums[i]);
        		int Max = max(dpMax[i-1] * nums[i],dpMin[i-1] * nums[i]);
        		
        		dpMax[i] = max(Max,nums[i]);
        		dpMin[i] = min(Min,nums[i]);
        		
        		if(dpMax[i] > res)
        			res = dpMax[i];
        	}
        }
        
        return res;
    }
};

int main(){
	
} 
