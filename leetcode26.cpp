#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if(nums.empty())
    		return 0;
    	
        int k = 0,t = 0;
        while(t<nums.size()){
        	if(nums[t++] != nums[k])
        		nums[++k] = nums[t];
        }
        
        return k+1;
    }
};

int main(){
	
}
