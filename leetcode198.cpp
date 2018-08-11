#include <iostream>
#include <vector>

using namespace std;

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int res[10000] = {0};
        res[0] = nums[0];
        res[1] = max(nums[1],res[0]);
        
        int i=2;
        for(;i<nums.size();i++){
        	res[i] = max(res[i-2] + nums[i],res[i-1]);
        }
        return res[nums.size()-1];
    }
};


int main(){
	
} 
