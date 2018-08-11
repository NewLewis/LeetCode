#include <iostream>
#include <algorithm> 

using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
    	if(nums.empty() || nums.size() == 1)
    		return 0;
        sort(nums.begin(),nums.end());
        int res = 1 << 31;
        for(int i=0;i<nums.size()-1;i++){
        	if(abs(nums[i+1] - nums[i]) > res)
        		res = abs(nums[i+1] - nums[i]);
        }
        return res;
    }
};

int main(){
	
} 
