#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    	int Max[1000] = {0};
    	int res = 1 << 31;
        for(int i=0;i<nums.size();i++){
        	if(i == 0){
        		Max[i] = nums[i];
        	}else 
        		Max[i] = max(Max[i-1] + nums[i],nums[i]);
        	if(res < Max[i])
        		res = Max[i];
        }
        return res;
    }
};

int main(){
	
}
